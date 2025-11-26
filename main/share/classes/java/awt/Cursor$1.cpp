#include <java/awt/Cursor$1.h>

#include <java/awt/Cursor.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$CursorAccessor = ::sun::awt::AWTAccessor$CursorAccessor;

namespace java {
	namespace awt {

$MethodInfo _Cursor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Cursor$1::*)()>(&Cursor$1::init$))},
	{"getPData", "(Ljava/awt/Cursor;)J", nullptr, $PUBLIC},
	{"getType", "(Ljava/awt/Cursor;)I", nullptr, $PUBLIC},
	{"setPData", "(Ljava/awt/Cursor;J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Cursor$1_EnclosingMethodInfo_ = {
	"java.awt.Cursor",
	nullptr,
	nullptr
};

$InnerClassInfo _Cursor$1_InnerClassesInfo_[] = {
	{"java.awt.Cursor$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$CursorAccessor", "sun.awt.AWTAccessor", "CursorAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Cursor$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Cursor$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$CursorAccessor",
	nullptr,
	_Cursor$1_MethodInfo_,
	nullptr,
	&_Cursor$1_EnclosingMethodInfo_,
	_Cursor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Cursor"
};

$Object* allocate$Cursor$1($Class* clazz) {
	return $of($alloc(Cursor$1));
}

void Cursor$1::init$() {
}

int64_t Cursor$1::getPData($Cursor* cursor) {
	return $nc(cursor)->pData;
}

void Cursor$1::setPData($Cursor* cursor, int64_t pData) {
	$nc(cursor)->pData = pData;
}

int32_t Cursor$1::getType($Cursor* cursor) {
	return $nc(cursor)->type;
}

Cursor$1::Cursor$1() {
}

$Class* Cursor$1::load$($String* name, bool initialize) {
	$loadClass(Cursor$1, name, initialize, &_Cursor$1_ClassInfo_, allocate$Cursor$1);
	return class$;
}

$Class* Cursor$1::class$ = nullptr;

	} // awt
} // java