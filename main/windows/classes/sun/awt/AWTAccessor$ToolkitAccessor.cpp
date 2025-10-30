#include <sun/awt/AWTAccessor$ToolkitAccessor.h>

#include <java/util/ResourceBundle.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$ToolkitAccessor_MethodInfo_[] = {
	{"setPlatformResources", "(Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$ToolkitAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$ToolkitAccessor", "sun.awt.AWTAccessor", "ToolkitAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$ToolkitAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$ToolkitAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$ToolkitAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$ToolkitAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$ToolkitAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$ToolkitAccessor));
}

$Class* AWTAccessor$ToolkitAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$ToolkitAccessor, name, initialize, &_AWTAccessor$ToolkitAccessor_ClassInfo_, allocate$AWTAccessor$ToolkitAccessor);
	return class$;
}

$Class* AWTAccessor$ToolkitAccessor::class$ = nullptr;

	} // awt
} // sun