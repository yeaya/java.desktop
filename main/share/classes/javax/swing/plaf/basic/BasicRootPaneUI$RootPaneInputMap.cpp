#include <javax/swing/plaf/basic/BasicRootPaneUI$RootPaneInputMap.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicRootPaneUI$RootPaneInputMap_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicRootPaneUI$RootPaneInputMap::*)($JComponent*)>(&BasicRootPaneUI$RootPaneInputMap::init$))},
	{}
};

$InnerClassInfo _BasicRootPaneUI$RootPaneInputMap_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicRootPaneUI$RootPaneInputMap", "javax.swing.plaf.basic.BasicRootPaneUI", "RootPaneInputMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicRootPaneUI$RootPaneInputMap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicRootPaneUI$RootPaneInputMap",
	"javax.swing.plaf.ComponentInputMapUIResource",
	nullptr,
	nullptr,
	_BasicRootPaneUI$RootPaneInputMap_MethodInfo_,
	nullptr,
	nullptr,
	_BasicRootPaneUI$RootPaneInputMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicRootPaneUI"
};

$Object* allocate$BasicRootPaneUI$RootPaneInputMap($Class* clazz) {
	return $of($alloc(BasicRootPaneUI$RootPaneInputMap));
}

void BasicRootPaneUI$RootPaneInputMap::init$($JComponent* c) {
	$ComponentInputMapUIResource::init$(c);
}

BasicRootPaneUI$RootPaneInputMap::BasicRootPaneUI$RootPaneInputMap() {
}

$Class* BasicRootPaneUI$RootPaneInputMap::load$($String* name, bool initialize) {
	$loadClass(BasicRootPaneUI$RootPaneInputMap, name, initialize, &_BasicRootPaneUI$RootPaneInputMap_ClassInfo_, allocate$BasicRootPaneUI$RootPaneInputMap);
	return class$;
}

$Class* BasicRootPaneUI$RootPaneInputMap::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax