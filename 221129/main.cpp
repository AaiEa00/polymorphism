#include <cassert>

#include "GameObject.h"
#include "Player.h"
#include "Monster.h"

#include <list>

using namespace std;

/// <summary>
/// エントリポイント
/// </summary>
/// <returns></returns>
int main()
{
	// リスト（シーン）の作成
	list<GameObject*> scene;
	
	// プレイヤを作成してシーンに登録
	Vector2 pos{ 1.0f, 3.0f };
	scene.push_back(new Player{ pos, 300, 100 });

	// モンスターデータを作成してシーンに登録
	const int num_monsters = 5;
	Vector2 pos2[num_monsters] =
	{
		{ 1.0f, -5.0f },
		{ 2.0f, -4.0f },
		{ 3.0f, -3.0f },
		{ 4.0f, -2.0f },
		{ 5.0f, -1.0f }
	};
	Monster* monster[num_monsters] =
	{
		new Monster{ pos2[0], 100, 50, 0.01f, 500 },
		new Monster{ pos2[1], 200, 40, 0.02f, 400 },
		new Monster{ pos2[2], 300, 30, 0.03f, 300 },
		new Monster{ pos2[3], 400, 20, 0.04f, 200 },
		new Monster{ pos2[4], 500, 10, 0.05f, 100 }
	};
	for (int i = 0; i < num_monsters; ++i)
	{
		scene.push_back(monster[i]);
	}

	//bool inGame = true;
	//while (inGame)
	//{
		// シーンに登録されている
		// ゲームオブジェクトすべてに対して状態更新して
		for (GameObject* obj : scene)
		{
			obj->Update();
		}

		// そのあとすべてに対して描画
		cout << endl;
		for (GameObject* obj : scene)
		{
			obj->Draw();
		}
	//}

	// シーンデータの後始末
	for (GameObject* obj : scene)
	{
		delete obj;
	}

	return 0;
}
//{
//	GameObject* obj = new GameObject;
//	Player* player = new Player;
//
//	assert(obj != nullptr);
//	assert(player != nullptr);
//
//	obj->Update();
//	obj->Draw();
//
//	player->Update();
//	player->Draw();
//
//	return 0;
//}