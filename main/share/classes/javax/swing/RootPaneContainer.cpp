#include <javax/swing/RootPaneContainer.h>

#include <java/awt/Container.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _RootPaneContainer_MethodInfo_[] = {
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC | $ABSTRACT},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RootPaneContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.RootPaneContainer",
	nullptr,
	nullptr,
	nullptr,
	_RootPaneContainer_MethodInfo_
};

$Object* allocate$RootPaneContainer($Class* clazz) {
	return $of($alloc(RootPaneContainer));
}

$Class* RootPaneContainer::load$($String* name, bool initialize) {
	$loadClass(RootPaneContainer, name, initialize, &_RootPaneContainer_ClassInfo_, allocate$RootPaneContainer);
	return class$;
}

$Class* RootPaneContainer::class$ = nullptr;

	} // swing
} // javax