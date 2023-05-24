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
/// �G���g���[�|�C���g
/// </summary>
int main(int argc, char *argv[])
{
	// �f�[�^�t�@�C�����Ȃ���ΏI��
	if (argc != 2)
		return errorEnd;

	// �A�����X�g�i�W�����C�u�����j
	// �V�[���̍쐬
	list<gameObject*> scene;

	// �N���X�w�蕶����i�[�p
	string buf;
	// �|�W�W�����w��l�i�[�p
	float x, y;
	// ���̑��p�����[�^�p
	float a, b, c, d, e;

	// �G���[���Ȃ����
	// �t�@�C������f�[�^��ǂݎ��
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

	//// �p�[�e�B�����o�[���쐬���ăV�[���ɓo�^
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

	// �V�[���ɓo�^����Ă���Q�[���I�u�W�F�N�g
	// ���ׂĂɑ΂��ď�ԍX�V����
	for (gameObject* obj : scene) {
		obj->update();
	}
	cout << endl;

	// ���ׂĂɑ΂��ĕ`��
	for (gameObject* obj : scene) {
		obj->draw();
	}

	for (gameObject* obj : scene) {
		delete obj;
	}
	
	return 0;
}