#include"libOne.h"
void gmain()
{
	window(1920, 1080, full);
	int life = 5;
	float px = 700;
	float py = 200;
	float radius = 50;
	float space = 100;


	while(notQuit)
	{
		if (isTrigger(KEY_A))
		{
			life--;
		}
		if (isTrigger(KEY_I))
		{
			life++;
		}
		clear(74, 84, 89);
		print((let)"life=" + life);
		int i = 0;
		while (i < life)
		{
			float offsetX = space + i;
			circle(px, py, radius * 2);
			i++;
		}
		//forƒo[ƒWƒ‡ƒ“
		for (int i = 0; i < life;)
		{
			float offsetX = space * 1;
			float offsetY = space * 2;
			circle(px + offsetX, py + offsetY, radius * 2);
		}


	}
}
/*
#include"libOne.h"
void gmain()
{
	window(1920, 1080, full);
	float px = 1920 / 2;
	float py = 1080 / 2;
	float vx = 10;
	float radius = 150;
	float len = radius / 1.4142f * 2;
	float sw = radius / 8;
	float angle = 0;
	float angleSpeed = 0.03f;
	while (notQuit)
	{
		px += vx;
		angle += angleSpeed;
		if (px < 0 || px > 1920)
		{
			vx = -vx;
			angleSpeed = -angleSpeed;

		}
		clear(60);
		strokeWeight(sw);
		stroke(255, 0, 0);
		circle(px, py, radius * 2);
		rectMode(CENTER);
		rect(px,py, len,len,angle);
		strokeWeight(sw * 4);
		point(px,py);
		strokeWeight(sw);
		line(1920 / 2, 0, px, py);


	}


}
*/

