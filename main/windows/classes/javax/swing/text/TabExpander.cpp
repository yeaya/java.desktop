#include <javax/swing/text/TabExpander.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _TabExpander_MethodInfo_[] = {
	{"nextTabStop", "(FI)F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TabExpander_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.TabExpander",
	nullptr,
	nullptr,
	nullptr,
	_TabExpander_MethodInfo_
};

$Object* allocate$TabExpander($Class* clazz) {
	return $of($alloc(TabExpander));
}

$Class* TabExpander::load$($String* name, bool initialize) {
	$loadClass(TabExpander, name, initialize, &_TabExpander_ClassInfo_, allocate$TabExpander);
	return class$;
}

$Class* TabExpander::class$ = nullptr;

		} // text
	} // swing
} // javax