Shader "Custom/SiriLikeShader"
{
    Properties
    {
        _MainTex ("Main Texture", 2D) = "white" {}
        _Color ("Color", Color) = (1,1,1,1)
        _Speed ("Speed", Range(0, 10)) = 1
    }
 
    SubShader
    {
        Tags { "Queue" = "Transparent" }
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _Color;
            float _Speed;

            v2f vert (appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            half4 frag (v2f i) : SV_Target
            {
                // 根据时间和速度计算纹理坐标偏移
                float offset = _Speed * _Time.y;

                // 根据偏移获取纹理颜色
                half4 texColor = tex2D(_MainTex, i.uv + float2(offset, 0));

                // 使用颜色混合
                return texColor * _Color;
            }
            ENDCG
        }
    }
}
