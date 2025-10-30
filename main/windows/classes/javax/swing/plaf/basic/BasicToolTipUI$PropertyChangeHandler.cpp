#include <javax/swing/plaf/basic/BasicToolTipUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolTipUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicToolTipUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;
using $ToolTipUI = ::javax::swing::plaf::ToolTipUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicToolTipUI = ::javax::swing::plaf::basic::BasicToolTipUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicToolTipUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicToolTipUI$PropertyChangeHandler::*)()>(&BasicToolTipUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolTipUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicToolTipUI", "PropertyChangeHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicToolTipUI$PropertyChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_BasicToolTipUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolTipUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolTipUI"
};

$Object* allocate$BasicToolTipUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicToolTipUI$PropertyChangeHandler));
}

void BasicToolTipUI$PropertyChangeHandler::init$() {
}

void BasicToolTipUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	bool var$2 = $nc(name)->equals("tiptext"_s);
	bool var$1 = var$2 || "foreground"_s->equals(name);
	bool var$0 = var$1 || "font"_s->equals(name);
	if (var$0 || $SwingUtilities2::isScaleChanged(e)) {
		$var($JToolTip, tip, $cast($JToolTip, e->getSource()));
		$var($String, text, $nc(tip)->getTipText());
		$BasicHTML::updateRenderer(tip, text);
	} else if ("component"_s->equals(name)) {
		$var($JToolTip, tip, $cast($JToolTip, e->getSource()));
		if ($instanceOf($BasicToolTipUI, $($cast($ToolTipUI, $nc(tip)->getUI())))) {
			$nc(($cast($BasicToolTipUI, $($cast($ToolTipUI, tip->getUI())))))->componentChanged(tip);
		}
	}
}

BasicToolTipUI$PropertyChangeHandler::BasicToolTipUI$PropertyChangeHandler() {
}

$Class* BasicToolTipUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicToolTipUI$PropertyChangeHandler, name, initialize, &_BasicToolTipUI$PropertyChangeHandler_ClassInfo_, allocate$BasicToolTipUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicToolTipUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax