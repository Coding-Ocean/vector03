#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //�P�����x�N�g��
        float vx = -3;
        //�x�N�g���̑傫��
        float mag = vx < 0 ? -vx : vx;
        //�N���A���č��W��`��
        clear(200);
        mathAxis(5.1f);
        //�x�N�g����`��
        strokeWeight(10);
        mathArrow(0, 0, vx, 0);
        //�e�L�X�g���`��
        textSize(50);
        text((let)"vec(" + vx + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);

    }
}
