#include <java/awt/Cursor$CursorDisposer.h>

#include <java/awt/Cursor.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Cursor$CursorDisposer_FieldInfo_[] = {
	{"pData", "J", nullptr, $VOLATILE, $field(Cursor$CursorDisposer, pData)},
	{}
};

$MethodInfo _Cursor$CursorDisposer_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(Cursor$CursorDisposer::*)(int64_t)>(&Cursor$CursorDisposer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Cursor$CursorDisposer_InnerClassesInfo_[] = {
	{"java.awt.Cursor$CursorDisposer", "java.awt.Cursor", "CursorDisposer", $STATIC},
	{}
};

$ClassInfo _Cursor$CursorDisposer_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Cursor$CursorDisposer",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_Cursor$CursorDisposer_FieldInfo_,
	_Cursor$CursorDisposer_MethodInfo_,
	nullptr,
	nullptr,
	_Cursor$CursorDisposer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Cursor"
};

$Object* allocate$Cursor$CursorDisposer($Class* clazz) {
	return $of($alloc(Cursor$CursorDisposer));
}

void Cursor$CursorDisposer::init$(int64_t pData) {
	this->pData = pData;
}

void Cursor$CursorDisposer::dispose() {
	if (this->pData != 0) {
		$Cursor::finalizeImpl(this->pData);
	}
}

Cursor$CursorDisposer::Cursor$CursorDisposer() {
}

$Class* Cursor$CursorDisposer::load$($String* name, bool initialize) {
	$loadClass(Cursor$CursorDisposer, name, initialize, &_Cursor$CursorDisposer_ClassInfo_, allocate$Cursor$CursorDisposer);
	return class$;
}

$Class* Cursor$CursorDisposer::class$ = nullptr;

	} // awt
} // java