#include <list>
#include <vector>
#include <fstream>

#include "player/hero.h"
#include "player/mage.h"
#include "player/monk.h"
#include "player/warrior.h"
#include "monster/boss.h"
#include "monster/dragon.h"
#include "monster/golem.h"
#include "monster/slime.h"
#include "monster/wraith.h"

using namespace std;
constexpr auto errorEnd = -1;

/// <summary>
/// エントリーポイント
/// </summary>
int main(int argc, char *argv[])
{
	// データファイルがなければ終了
	if (argc != 2)
		return errorEnd;

	// 連結リスト（標準ライブラリ）
	// シーンの作成
	list<gameObject*> scene;

	// クラス指定文字列格納用
	string buf;
	// ポジジョン指定値格納用
	float x, y;
	// その他パラメータ用
	float a, b, c, d, e;

	// エラーがなければ
	// ファイルからデータを読み取る
	ifstream ifs(argv[1]);
	if (ifs.bad())
		return errorEnd;
	else
	{
		while (ifs.eof() == false)
		{
			ifs >> buf >> x >> y >> a >> b >> c >> d >> e;
			vector2 pos = { x, y };
			cout << buf << pos << a << b << c << d << e << endl;
		}
		ifs.close();
	}

	//// パーティメンバーを作成してシーンに登録
	//vector<vector2> pos{
	//	{ 1.0f, -9.0f },
	//	{ 2.0f, -8.0f },
	//	{ 3.0f, -7.0f },
	//	{ 4.0f, -6.0f },
	//	{ 5.0f, -5.0f },
	//	{ 6.0f, -4.0f },
	//	{ 7.0f, -3.0f },
	//	{ 8.0f, -2.0f },
	//	{ 9.0f, -1.0f }
	//};
	//
	//scene.push_back(new hero{ pos.at(0), 500, 50, 20, 16, 1.5f });
	//scene.push_back(new mage{ pos.at(1), 400, 40, 15, 12, 10 });
	//scene.push_back(new monk{ pos.at(2), 300, 30, 10, 8, 10.5f });
	//scene.push_back(new warrior{ pos.at(3), 200, 20, 5, 4, 20.4f });
	//scene.push_back(new boss{ pos.at(4), 100, 10, 8.2f, 6, 24.1f });
	//scene.push_back(new dragon{ pos.at(5), 200, 20, 6.9f, 9, 52 });
	//scene.push_back(new golem{ pos.at(6), 300, 30, 4.6f, 65, 60.3f });
	//scene.push_back(new slime{ pos.at(7), 400, 40, 20.4f, 5, 2.4f });
	//scene.push_back(new wraith{ pos.at(8), 500, 50, 15.4f, 13, 13.5f });

	// シーンに登録されているゲームオブジェクト
	// すべてに対して状態更新して
	for (gameObject* obj : scene) {
		obj->update();
	}
	cout << endl;

	// すべてに対して描画
	for (gameObject* obj : scene) {
		obj->draw();
	}

	for (gameObject* obj : scene) {
		delete obj;
	}
	
	return 0;
}