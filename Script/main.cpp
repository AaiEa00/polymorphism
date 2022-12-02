#include <list>
#include "GameObject.h"
#include "Player.h"
#include "Monster.h"
using namespace std;

/// <summary>
/// エントリーポイント
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main(void)
{
	// 連結リスト（標準ライブラリ）
	// シーンの作成
	list<GameObject*> scene;

	// プレイヤーを作成してシーンに登録
	Vector2 pos { 1.0f, 3.0f };
	scene.push_back(new Player{ pos, 300, 100 });

	// モンスターデータを作成してシーンに登録
	const int num_monsters = 5;
	Vector2 pos2[num_monsters] = {
		{ 1.0f, -4.0f },
		{ 2.0f, -3.0f },
		{ 3.0f, -2.0f },
		{ 4.0f, -1.0f },
		{ 5.0f, 0.0f },
	};
	Monster* monster[num_monsters] = {
		new Monster{ pos2[0], 100, 50, 0.01f, 500 },
		new Monster{ pos2[1], 200, 40, 0.02f, 400 },
		new Monster{ pos2[2], 300, 30, 0.03f, 300 },
		new Monster{ pos2[3], 400, 20, 0.04f, 200 },
		new Monster{ pos2[4], 500, 10, 0.05f, 100 },
	};

	for (int i = 0; i < num_monsters; i++) {
		scene.push_back(monster[i]);
	}

	//bool in_game = false;
	//while (in_game)
	//{
	// シーンに登録されているゲームオブジェクト
	// すべてに対して状態更新して
	for (GameObject* obj : scene) {
		obj->Update();
	}
	cout << endl;
	// すべてに対して描画
	for (GameObject* obj : scene) {
		obj->Draw();
	}
	//}

		for (GameObject* obj : scene) {
			delete obj;
		}
	
		return 0;
}