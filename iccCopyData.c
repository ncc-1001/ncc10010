#include "nokia.h"
#include <stdint.h>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */



uint32_t iccCopyData(uint32_t *param_1,uint *param_2,int *param_3)



{

  ushort uVar1;

  bool bVar2;

  int in_zero;

  int iVar3;

  uint uVar4;

  int iVar5;

  uint32_t uVar6;

  uint32_t uVar7;

  int *piVar8;

  uint32_t uVar9;

  uint uVar10;

  uint uVar11;

  uint uVar12;

  char *pcVar13;

  int iVar14;

  int *piVar15;

  uint16_t uVar16;

  uint uVar17;

  uint uVar18;

  int iVar19;

  int iVar20;

  int aiStack_108 [48];

  uint uStack_48;

  uint uStack_44;

  uint uStack_40;

  uint32_t uStack_3c;

  uint32_t uStack_38;

  uint uStack_34;

  int iStack_30;

  

  uStack_48 = 0;

  uStack_44 = 0;

  iVar20 = 0;

  uStack_40 = 0;

  uStack_3c = 0;

  if (param_1 == (uint32_t *)0x0) {

    timosAssert(0x9c3a6ac,0x9c364cc,0x1eaf,0x9c3b3fc,0x9c36508);

  }

  if (((_IccTraceSocket == 0 || param_1 == (uint32_t *)0x0) ||

      (uVar18 = 0, *(short *)(param_1 + 1) == _IccTraceSocket)) &&

     (uVar18 = 0, _tracepointsActive != 0)) {

    iVar19 = traceTest(_MOD_ICC | _iccTmdOnly,0x9c3b3fc,1,0);

    uVar18 = 0;

    if (iVar19 != 0) {

      uVar9 = 0x9c3a45c;

      if (*(char *)((int)param_1 + 0x451) == '\0') {

        uVar9 = 0x9c3a468;

      }

      if (_kernelIsSmp == 0) {

        uVar6 = *(uint32_t *)(_smpTaskIdCurrent + 0x2b8);

        uVar7 = *(uint32_t *)(_smpTaskIdCurrent + 700);

      }

      else {

        uVar6 = *(uint32_t *)(*(int *)(in_zero + -0x8000) + 0x2b8);

        uVar7 = *(uint32_t *)(*(int *)(in_zero + -0x8000) + 700);

      }

      tracePrintVRtr(_MOD_ICC | _iccTmdOnly,0x9c3b3fc,1,0,1,0x9c3b408,param_1[0x100],param_1[0x101],

                     *(uint16_t *)(param_1 + 1),uVar9,param_1,*param_2,uVar6,uVar7,*param_1,

                     param_1[4]);

      uVar18 = 0;

    }

  }

  do {

    uVar17 = uVar18 + 1;

    aiStack_108[uVar18] = param_1[uVar18 + 0xce];

    param_1[uVar18 + 0xce] = 0;

    uVar18 = uVar17;

  } while (uVar17 < 0x30);

  uVar18 = 0;

  piVar15 = param_3;

  if (*param_2 != 0) {

    do {

      uVar18 = uVar18 + 1;

      uStack_44 = uStack_44 + *piVar15;

      piVar15 = piVar15 + 2;

    } while (uVar18 < *param_2);

  }

  iVar19 = 0;

  do {

    uVar18 = uStack_44 - uStack_48;

    if (_IccSfMtuSize < uStack_44 - uStack_48) {

      uVar18 = _IccSfMtuSize;

    }

    iVar3 = pbufAllocExt(uVar18,0,_MOD_ICC & 0xffff);

    uVar17 = Status;

    if (iVar3 == 0) {

      if ((_tracepointsActive != 0) &&

         (iVar20 = traceTest(_MOD_ICC | _iccTmdOnly,0x9c3b3fc,2,0), iVar20 != 0)) {

        tracePrintVRtr(_MOD_ICC | _iccTmdOnly,0x9c3b3fc,2,0,1,0x9c3b314);

      }

      if (_kernelIsSmp == 0) {

        piVar15 = (int *)(*(int *)(_smpTaskIdCurrent + 0x2b8) * 4 + _IccVars);

LAB_02ac2370:

        uVar18 = (uint)*(byte *)((int)param_1 + 0x451);

        iVar20 = uVar18 * 8 + *(int *)(_smpTaskIdCurrent + 700) * 0x3a2378 + *piVar15 + 0x390000;

        if (_kernelIsSmp != 0) goto LAB_02ac217c;

LAB_02ac23cc:

        piVar15 = (int *)(*(int *)(_smpTaskIdCurrent + 0x2b8) * 4 + _IccVars);

        if (_kernelIsSmp == 0) goto LAB_02ac23e4;

LAB_02ac2190:

        iVar3 = uVar18 * 8 + *(int *)(*(int *)(in_zero + -0x8000) + 700) * 0x3a2378 + *piVar15;

        iVar19 = *(int *)(iVar3 + 0x393820);

        iVar3 = *(int *)(iVar3 + 0x393824) + 1;

        *(int *)(iVar20 + 0x3824) = iVar3;

        *(uint *)(iVar20 + 0x3820) = iVar19 + (uint)(iVar3 == 0);

        if (_kernelIsSmp != 0) {

          iVar20 = *(int *)(in_zero + -0x8000);

          goto LAB_02ac2210;

        }

LAB_02ac2464:

        piVar15 = (int *)(*(int *)(_smpTaskIdCurrent + 0x2b8) * 4 + _IccVars);

        if (_kernelIsSmp == 0) goto LAB_02ac2484;

LAB_02ac2228:

        uVar18 = (uint)*(ushort *)(param_1 + 1);

        iVar20 = *(int *)(*(int *)(in_zero + -0x8000) + 700) * 0x3a2378 + *piVar15;

        if (uVar18 < 0x76) goto LAB_02ac2274;

LAB_02ac24d4:

        uVar17 = (uint)*(byte *)((int)param_1 + 0x451);

        piVar15 = (int *)(iVar20 + uVar17 * 0x1d8 + 0x393830);

        if (_kernelIsSmp == 0) goto LAB_02ac2504;

LAB_02ac22ac:

        piVar8 = (int *)(*(int *)(*(int *)(in_zero + -0x8000) + 0x2b8) * 4 + _IccVars);

        if (_kernelIsSmp != 0) goto LAB_02ac22c0;

LAB_02ac251c:

        iVar20 = *(int *)(_smpTaskIdCurrent + 700) * 0x3a2378 + *piVar8;

        if (0x75 < uVar18) goto LAB_02ac2568;

LAB_02ac2308:

        iVar19 = (uVar17 * 0x76 + uVar18) * 4;

      }

      else {

        piVar15 = (int *)(*(int *)(*(int *)(in_zero + -0x8000) + 0x2b8) * 4 + _IccVars);

        if (_kernelIsSmp == 0) goto LAB_02ac2370;

        uVar18 = (uint)*(byte *)((int)param_1 + 0x451);

        iVar20 = uVar18 * 8 + *(int *)(*(int *)(in_zero + -0x8000) + 700) * 0x3a2378 + *piVar15 +

                 0x390000;

        if (_kernelIsSmp == 0) goto LAB_02ac23cc;

LAB_02ac217c:

        piVar15 = (int *)(*(int *)(*(int *)(in_zero + -0x8000) + 0x2b8) * 4 + _IccVars);

        if (_kernelIsSmp != 0) goto LAB_02ac2190;

LAB_02ac23e4:

        iVar3 = uVar18 * 8 + *(int *)(_smpTaskIdCurrent + 700) * 0x3a2378 + *piVar15;

        iVar19 = *(int *)(iVar3 + 0x393820);

        iVar3 = *(int *)(iVar3 + 0x393824) + 1;

        *(int *)(iVar20 + 0x3824) = iVar3;

        *(uint *)(iVar20 + 0x3820) = iVar19 + (uint)(iVar3 == 0);

        if (_kernelIsSmp == 0) goto LAB_02ac2464;

        iVar20 = *(int *)(in_zero + -0x8000);

LAB_02ac2210:

        piVar15 = (int *)(*(int *)(iVar20 + 0x2b8) * 4 + _IccVars);

        if (_kernelIsSmp != 0) goto LAB_02ac2228;

LAB_02ac2484:

        uVar18 = (uint)*(ushort *)(param_1 + 1);

        iVar20 = *(int *)(_smpTaskIdCurrent + 700) * 0x3a2378 + *piVar15;

        if (0x75 < uVar18) goto LAB_02ac24d4;

LAB_02ac2274:

        uVar17 = (uint)*(byte *)((int)param_1 + 0x451);

        piVar15 = (int *)(iVar20 + (uVar17 * 0x76 + uVar18) * 4 + 0x393830);

        if (_kernelIsSmp != 0) goto LAB_02ac22ac;

LAB_02ac2504:

        piVar8 = (int *)(*(int *)(_smpTaskIdCurrent + 0x2b8) * 4 + _IccVars);

        if (_kernelIsSmp == 0) goto LAB_02ac251c;

LAB_02ac22c0:

        iVar20 = *(int *)(*(int *)(in_zero + -0x8000) + 700) * 0x3a2378 + *piVar8;

        if (uVar18 < 0x76) goto LAB_02ac2308;

LAB_02ac2568:

        iVar19 = uVar17 * 0x1d8;

      }

      uStack_3c = 0xffffffff;

      *piVar15 = *(int *)(iVar20 + iVar19 + 0x393830) + 1;

      goto LAB_02ac1eac;

    }

    piVar15 = (int *)(iVar3 + 0x88);

    param_1[uStack_40 + 0xce] = iVar3;

    uVar11 = _vxAbsTicks;

    uVar12 = (uint)*(ushort *)(iVar3 + 0x94);

    uVar4 = _vxAbsTicks / 100;

    if (uVar12 != 0) {

      if (_kernelIsSmp == 0) {

        if (_smpIntCnt == 0) {

LAB_02ac2034:

          *piVar15 = _smpTaskIdCurrent;

        }

        else {

          *piVar15 = 0;

        }

      }

      else {

        Status = Status & 0xfffffffe;

        setCopReg(0,Status,uVar17,0);

        if (*(int *)(&smpIntCnt + (EBase & 0xff) * 4) < 1) {

          if (_kernelIsSmp == 0) goto LAB_02ac2034;

          *piVar15 = *(int *)(in_zero + -0x8000);

        }

        else {

          *piVar15 = 0;

        }

      }

      uVar17 = Status;

      uVar10 = (uVar4 & 0xffff) - (uint)*(ushort *)(iVar3 + 0x96) & 0xffff;

      uVar16 = (uint16_t)uVar4;

      if ((uVar10 != 0) && (uVar12 < 0xab)) {

        if (8 < uVar10) {

          uVar10 = 8;

        }

        iVar5 = (uVar12 * 0x558 + uVar10) * 8;

        piVar15 = (int *)(iVar5 + 0xecd47ec);

        *(uint16_t *)(iVar5 + 0xecd47f0) = uVar16;

        *piVar15 = *piVar15 + 1;

      }

      if (pbufMarkHistoryTrack != '\0') {

        if ((*(uint *)(iVar3 + 0x9c) & 0x8000) == 0) {

          uStack_38 = 0xffffffff;

          uVar17 = *(uint *)(iVar3 + 0xc);

          iVar5 = *(int *)(iVar3 + 8) + iVar3 + 0xa0;

          bVar2 = false;

          uStack_34 = (uint)_pbufMarkHistoryLocationVal1;

          if (_pbufMarkHistoryOffStart <= _pbufMarkHistoryOffEnd) {

            iStack_30 = _pbufMarkHistoryOff3 + iVar5;

            uVar11 = _pbufMarkHistoryOffStart;

            do {

              if ((((_pbufMarkHistoryOff1 == -1) ||

                   ((_pbufMarkHistoryOff1 + uVar11 < uVar17 &&

                    (*(char *)(_pbufMarkHistoryOff1 + iVar5 + uVar11) == pbufMarkHistoryVal1)))) &&

                  ((_pbufMarkHistoryOff2 == -1 ||

                   ((_pbufMarkHistoryOff2 + uVar11 < uVar17 &&

                    (*(char *)(_pbufMarkHistoryOff2 + iVar5 + uVar11) == pbufMarkHistoryVal2))))))

                 && ((_pbufMarkHistoryOff3 == -1 ||

                     ((_pbufMarkHistoryOff3 + uVar11 < uVar17 &&

                      (*(char *)(_pbufMarkHistoryOff3 + iVar5 + uVar11) == pbufMarkHistoryVal3))))))

              {

                bVar2 = true;

                break;

              }

              uVar11 = uVar11 + 1;

            } while (uVar11 <= _pbufMarkHistoryOffEnd);

          }

          if (bVar2) {

            if ((pbufMarkHistoryMatchLocation1 == '\0') || (_pbufMarkHistoryLocationVal1 == 0x1b))

            goto LAB_02ac1c48;

            *(uint16_t *)(iVar3 + 0x94) = 0x1b;

            uVar1 = *(ushort *)(param_1 + 1);

            *(uint16_t *)(iVar3 + 0x96) = uVar16;

            *(uint *)(iVar3 + 0x98) = (uint)uVar1;

            goto LAB_02ac1da8;

          }

          if (bVar2) {

LAB_02ac1c48:

                    /* WARNING: Subroutine does not return */

            intLockProtect(&pbufMarkHistoryLock);

          }

        }

        else {

          iVar5 = (uint)*(ushort *)(iVar3 + 0x9c) * 0x408;

          pcVar13 = &pbufMarkHistoryTable + iVar5;

          if (*pcVar13 == '\0') {

            *pcVar13 = '\x01';

            *(uint32_t *)(iVar5 + 0xe58e868) = 0;

            uVar4 = *(uint *)(iVar5 + 0xe58e868);

          }

          else {

            uVar4 = *(uint *)(iVar5 + 0xe58e868);

          }

          if (uVar4 < 0x3f) {

            piVar15 = (int *)(pcVar13 + uVar4 * 0x10 + 8);

            if (_kernelIsSmp == 0) {

              if (_smpIntCnt == 0) {

LAB_02ac205c:

                *piVar15 = _smpTaskIdCurrent;

              }

              else {

                *piVar15 = 0;

              }

            }

            else {

              Status = Status & 0xfffffffe;

              setCopReg(0,Status,uVar17,0);

              if (*(int *)(&smpIntCnt + (EBase & 0xff) * 4) < 1) {

                if (_kernelIsSmp == 0) goto LAB_02ac205c;

                *piVar15 = *(int *)(in_zero + -0x8000);

              }

              else {

                *piVar15 = 0;

              }

            }

            *(uint16_t *)(pcVar13 + uVar4 * 0x10 + 0xc) = 0x1b;

            uVar1 = *(ushort *)(param_1 + 1);

            *(uint *)(pcVar13 + uVar4 * 0x10 + 0x10) = uVar11;

            *(uint16_t *)(pcVar13 + uVar4 * 0x10 + 0xe) = uVar16;

            *(uint *)(pcVar13 + uVar4 * 0x10 + 0x14) = (uint)uVar1;

            *(int *)(iVar5 + 0xe58e868) = *(int *)(iVar5 + 0xe58e868) + 1;

          }

        }

      }

      *(uint16_t *)(iVar3 + 0x94) = 0x1b;

      uVar1 = *(ushort *)(param_1 + 1);

      *(uint16_t *)(iVar3 + 0x96) = uVar16;

      *(uint *)(iVar3 + 0x98) = (uint)uVar1;

    }

LAB_02ac1da8:

    iVar5 = uStack_40 - 0x32;

    uStack_40 = uStack_40 + 1;

    uVar17 = 0;

    aiStack_108[iVar5] = *(int *)(iVar3 + 0xc);

    if (uVar18 != 0) {

      piVar15 = param_3 + iVar19 * 2;

      iVar5 = *piVar15;

      while( true ) {

        uVar4 = uVar18 - uVar17;

        uVar11 = iVar5 - iVar20;

        if (uVar4 < (uint)(iVar5 - iVar20)) {

          uVar11 = uVar4;

        }

        iVar5 = *(int *)(iVar3 + 8) + iVar3 + uVar17;

        uStack_48 = uStack_48 + uVar11;

        iVar14 = piVar15[1] + iVar20;

        uVar17 = uVar17 + uVar11;

        iVar20 = iVar20 + uVar11;

        memcpy(iVar5 + 0xa0,iVar14,uVar11);

        if (uVar11 != uVar4) {

          iVar19 = iVar19 + 1;

          piVar15 = piVar15 + 2;

          iVar20 = 0;

        }

        if (uVar18 <= uVar17) break;

        iVar5 = *piVar15;

      }

    }

    *(uint *)(iVar3 + 0xc) = uVar18;

  } while (uStack_48 < uStack_44);

  uVar18 = 0;

  if (uStack_40 != 0) {

    do {

      uVar18 = uVar18 + 1;

      param_3[1] = param_1[0xce] + *(int *)(param_1[0xce] + 8) + 0xa0;

      piVar15 = param_1 + 0xce;

      param_1 = param_1 + 1;

      *param_3 = *(int *)(*piVar15 + 0xc);

      param_3 = param_3 + 2;

    } while (uVar18 < uStack_40);

  }

  *param_2 = uStack_40;

LAB_02ac1eac:

  piVar15 = aiStack_108;

  iVar20 = 0x2f;

  do {

    iVar19 = *piVar15;

    while( true ) {

      iVar20 = iVar20 + -1;

      piVar15 = piVar15 + 1;

      if (iVar19 == 0) break;

      iccPbufFree(iVar19);

      if (iVar20 < 0) {

        return uStack_3c;

      }

      iVar19 = *piVar15;

    }

    if (iVar20 < 0) {

      return uStack_3c;

    }

  } while( true );

}



