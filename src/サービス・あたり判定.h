#pragma once
#include "共通.h"

namespace エンジン
{
	class あたり判定サービス;
	class 弾丸サービス;
	class エンティティサービス;

	struct あたり判定データ
	{
		float2 プレイヤー座標;
		float2 ザコ座標;	
	};

	class あたり判定
	{
		bool 判定(float2 プレイヤー座標, float2 ザコ座標);
	};
}
