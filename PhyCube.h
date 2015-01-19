class PhyCube{
	public:
		float x;
		float y;
		float z;
		float w1;
		float w2;
		float l1;
		float l2;
		float h1;
		float h2;

	    float angelX;
	    float angelY;
	    float angelZ;

	    bool clackByPoint(float x, float y, float z);


};


bool PhyCube::clackByPoint(float x, float y , float z){

	float tempX = this->x - x;
	float tempY = this->y - y;
	float tempZ = this->z - z;


	tempX = cosf(this->angelX)*tempX;
	tempY = cosf(this->angelY)*tempY;
	tempZ = cosf(this->angelZ)*tempZ;

	return (w1 <= tempX && w2 >= tempX && l1 <= tempZ && l2 >= tempZ && h1 <= tempY && h2 <= tempY);

}


