#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $SwingAccessor = ::sun::swing::SwingAccessor;

namespace sun {
	namespace swing {

$MethodInfo _SwingAccessor$UIDefaultsAccessor_MethodInfo_[] = {
	{"addInternalBundle", "(Ljavax/swing/UIDefaults;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingAccessor$UIDefaultsAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$UIDefaultsAccessor", "sun.swing.SwingAccessor", "UIDefaultsAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor$UIDefaultsAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingAccessor$UIDefaultsAccessor",
	nullptr,
	nullptr,
	nullptr,
	_SwingAccessor$UIDefaultsAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor$UIDefaultsAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor"
};

$Object* allocate$SwingAccessor$UIDefaultsAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor$UIDefaultsAccessor));
}

$Class* SwingAccessor$UIDefaultsAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor$UIDefaultsAccessor, name, initialize, &_SwingAccessor$UIDefaultsAccessor_ClassInfo_, allocate$SwingAccessor$UIDefaultsAccessor);
	return class$;
}

$Class* SwingAccessor$UIDefaultsAccessor::class$ = nullptr;

	} // swing
} // sun