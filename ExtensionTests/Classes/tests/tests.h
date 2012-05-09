#ifndef _TESTS_H_
#define _TESTS_H_

#include "AdvancedParticleTest/AdvanceParticleTest.h"
#include "AdvanceSpriteTest/AdvanceSpriteTest.h"
#include "NdCxListTest/NdCxListTest.h"
#include "CCMenuItemDynamic/CCMenuItemDynamicTest.h"
#include "DecoratedBox/DecoratedBoxTest.h"

enum
{
    TEST_NDCX_LIST = 0,
    TEST_ADVANCE_SPRITE,
    TEST_ADVANCE_PARTICLE,
	TEST_MENUITEMDINAMIC,
	TEST_DECORATEDBOX,

    TESTS_COUNT,
};

const std::string g_aTestNames[TESTS_COUNT] = {
    "NdCxListTest",
    "AdvanceSpriteTest",
    "AdvanceParticleTest",
	"CCMenuItemDynamicTest",
	"DecoratedBox",
};

#endif
