#pragma once

class Scene01 : public Scene
{
private:
	Player* pl;
	Monster* mon;

	ObTileMap* map;

	//길찾기용 변수
	vector<Tile*> PlWay;

	//이동시킬 위치
	Vector2 PlDest;
	Vector2 PlSour;

	//비율
	float   g;

public:
	Scene01();
	~Scene01();

	virtual void Init() override;
	virtual void Release() override; //해제
	virtual void Update() override;
	virtual void LateUpdate() override;//갱신
	virtual void Render() override;
	virtual void ResizeScreen() override;
};

