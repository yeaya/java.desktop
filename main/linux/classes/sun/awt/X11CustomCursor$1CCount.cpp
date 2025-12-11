#include <sun/awt/X11CustomCursor$1CCount.h>

#include <sun/awt/X11CustomCursor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11CustomCursor = ::sun::awt::X11CustomCursor;

namespace sun {
	namespace awt {

$FieldInfo _X11CustomCursor$1CCount_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11CustomCursor;", nullptr, $FINAL | $SYNTHETIC, $field(X11CustomCursor$1CCount, this$0)},
	{"color", "I", nullptr, 0, $field(X11CustomCursor$1CCount, color)},
	{"count", "I", nullptr, 0, $field(X11CustomCursor$1CCount, count)},
	{}
};

$MethodInfo _X11CustomCursor$1CCount_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11CustomCursor;II)V", nullptr, $PUBLIC, $method(static_cast<void(X11CustomCursor$1CCount::*)($X11CustomCursor*,int32_t,int32_t)>(&X11CustomCursor$1CCount::init$))},
	{"compareTo", "(Lsun/awt/X11CustomCursor$1CCount;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _X11CustomCursor$1CCount_EnclosingMethodInfo_ = {
	"sun.awt.X11CustomCursor",
	"createNativeCursor",
	"(Ljava/awt/Image;[IIIII)V"
};

$InnerClassInfo _X11CustomCursor$1CCount_InnerClassesInfo_[] = {
	{"sun.awt.X11CustomCursor$1CCount", nullptr, "CCount", 0},
	{}
};

$ClassInfo _X11CustomCursor$1CCount_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11CustomCursor$1CCount",
	"java.lang.Object",
	"java.lang.Comparable",
	_X11CustomCursor$1CCount_FieldInfo_,
	_X11CustomCursor$1CCount_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/awt/X11CustomCursor$1CCount;>;",
	&_X11CustomCursor$1CCount_EnclosingMethodInfo_,
	_X11CustomCursor$1CCount_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11CustomCursor"
};

$Object* allocate$X11CustomCursor$1CCount($Class* clazz) {
	return $of($alloc(X11CustomCursor$1CCount));
}

void X11CustomCursor$1CCount::init$($X11CustomCursor* this$0, int32_t cl, int32_t ct) {
	$set(this, this$0, this$0);
	this->color = cl;
	this->count = ct;
}

int32_t X11CustomCursor$1CCount::compareTo(X11CustomCursor$1CCount* cc) {
	return $nc(cc)->count - this->count;
}

int32_t X11CustomCursor$1CCount::compareTo(Object$* cc) {
	return this->compareTo($cast(X11CustomCursor$1CCount, cc));
}

X11CustomCursor$1CCount::X11CustomCursor$1CCount() {
}

$Class* X11CustomCursor$1CCount::load$($String* name, bool initialize) {
	$loadClass(X11CustomCursor$1CCount, name, initialize, &_X11CustomCursor$1CCount_ClassInfo_, allocate$X11CustomCursor$1CCount);
	return class$;
}

$Class* X11CustomCursor$1CCount::class$ = nullptr;

	} // awt
} // sun