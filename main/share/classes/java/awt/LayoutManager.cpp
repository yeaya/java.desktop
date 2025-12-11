#include <java/awt/LayoutManager.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _LayoutManager_MethodInfo_[] = {
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LayoutManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.LayoutManager",
	nullptr,
	nullptr,
	nullptr,
	_LayoutManager_MethodInfo_
};

$Object* allocate$LayoutManager($Class* clazz) {
	return $of($alloc(LayoutManager));
}

$Class* LayoutManager::load$($String* name, bool initialize) {
	$loadClass(LayoutManager, name, initialize, &_LayoutManager_ClassInfo_, allocate$LayoutManager);
	return class$;
}

$Class* LayoutManager::class$ = nullptr;

	} // awt
} // java