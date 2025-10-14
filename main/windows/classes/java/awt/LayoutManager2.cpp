#include <java/awt/LayoutManager2.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _LayoutManager2_MethodInfo_[] = {
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC | $ABSTRACT},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LayoutManager2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.LayoutManager2",
	nullptr,
	"java.awt.LayoutManager",
	nullptr,
	_LayoutManager2_MethodInfo_
};

$Object* allocate$LayoutManager2($Class* clazz) {
	return $of($alloc(LayoutManager2));
}

$Class* LayoutManager2::load$($String* name, bool initialize) {
	$loadClass(LayoutManager2, name, initialize, &_LayoutManager2_ClassInfo_, allocate$LayoutManager2);
	return class$;
}

$Class* LayoutManager2::class$ = nullptr;

	} // awt
} // java