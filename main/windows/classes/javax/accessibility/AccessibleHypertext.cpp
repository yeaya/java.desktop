#include <javax/accessibility/AccessibleHypertext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleHyperlink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleHyperlink = ::javax::accessibility::AccessibleHyperlink;
using $AccessibleText = ::javax::accessibility::AccessibleText;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleHypertext_MethodInfo_[] = {
	{"getLink", "(I)Ljavax/accessibility/AccessibleHyperlink;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLinkCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLinkIndex", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleHypertext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleHypertext",
	nullptr,
	"javax.accessibility.AccessibleText",
	nullptr,
	_AccessibleHypertext_MethodInfo_
};

$Object* allocate$AccessibleHypertext($Class* clazz) {
	return $of($alloc(AccessibleHypertext));
}

$Class* AccessibleHypertext::load$($String* name, bool initialize) {
	$loadClass(AccessibleHypertext, name, initialize, &_AccessibleHypertext_ClassInfo_, allocate$AccessibleHypertext);
	return class$;
}

$Class* AccessibleHypertext::class$ = nullptr;

	} // accessibility
} // javax