#include <sun/awt/AWTAccessor$CursorAccessor.h>

#include <java/awt/Cursor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$CursorAccessor_MethodInfo_[] = {
	{"getPData", "(Ljava/awt/Cursor;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "(Ljava/awt/Cursor;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"setPData", "(Ljava/awt/Cursor;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$CursorAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$CursorAccessor", "sun.awt.AWTAccessor", "CursorAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$CursorAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$CursorAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$CursorAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$CursorAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$CursorAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$CursorAccessor));
}

$Class* AWTAccessor$CursorAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$CursorAccessor, name, initialize, &_AWTAccessor$CursorAccessor_ClassInfo_, allocate$AWTAccessor$CursorAccessor);
	return class$;
}

$Class* AWTAccessor$CursorAccessor::class$ = nullptr;

	} // awt
} // sun