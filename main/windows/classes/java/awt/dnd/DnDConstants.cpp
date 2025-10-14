#include <java/awt/dnd/DnDConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_COPY_OR_MOVE
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE
#undef ACTION_REFERENCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DnDConstants_FieldInfo_[] = {
	{"ACTION_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DnDConstants, ACTION_NONE)},
	{"ACTION_COPY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DnDConstants, ACTION_COPY)},
	{"ACTION_MOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DnDConstants, ACTION_MOVE)},
	{"ACTION_COPY_OR_MOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DnDConstants, ACTION_COPY_OR_MOVE)},
	{"ACTION_LINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DnDConstants, ACTION_LINK)},
	{"ACTION_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DnDConstants, ACTION_REFERENCE)},
	{}
};

$MethodInfo _DnDConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DnDConstants::*)()>(&DnDConstants::init$))},
	{}
};

$ClassInfo _DnDConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.dnd.DnDConstants",
	"java.lang.Object",
	nullptr,
	_DnDConstants_FieldInfo_,
	_DnDConstants_MethodInfo_
};

$Object* allocate$DnDConstants($Class* clazz) {
	return $of($alloc(DnDConstants));
}

void DnDConstants::init$() {
}

DnDConstants::DnDConstants() {
}

$Class* DnDConstants::load$($String* name, bool initialize) {
	$loadClass(DnDConstants, name, initialize, &_DnDConstants_ClassInfo_, allocate$DnDConstants);
	return class$;
}

$Class* DnDConstants::class$ = nullptr;

		} // dnd
	} // awt
} // java