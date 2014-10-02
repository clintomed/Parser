#pragma once
class Camera
{

	
public:
	int fov;
	float aspect;
	float near;
	int far;

	class Up{
		int x;
		int y;
		int z;
	} up;

	class Position {
		float x;
		float y;
		float z;
	} position;

	class Rotation {
		float x;
		float y;
		float z;
	} rotation;

	class Quaternion {
		float x;
		float y;
		float z;
		float w;
	} quaternion;

	class Scale {
		int x;
		int y;
		int z;
	} scale;

	
	Camera();
	void Test();
	~Camera();
};

