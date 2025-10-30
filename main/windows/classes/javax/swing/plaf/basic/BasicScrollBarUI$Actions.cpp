#include <javax/swing/plaf/basic/BasicScrollBarUI$Actions.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef MAX_SCROLL
#undef MIN_SCROLL
#undef NEGATIVE_BLOCK_INCREMENT
#undef NEGATIVE_UNIT_INCREMENT
#undef POSITIVE_BLOCK_INCREMENT
#undef POSITIVE_UNIT_INCREMENT

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JScrollBar = ::javax::swing::JScrollBar;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI$Actions_FieldInfo_[] = {
	{"POSITIVE_UNIT_INCREMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollBarUI$Actions, POSITIVE_UNIT_INCREMENT)},
	{"POSITIVE_BLOCK_INCREMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollBarUI$Actions, POSITIVE_BLOCK_INCREMENT)},
	{"NEGATIVE_UNIT_INCREMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollBarUI$Actions, NEGATIVE_UNIT_INCREMENT)},
	{"NEGATIVE_BLOCK_INCREMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollBarUI$Actions, NEGATIVE_BLOCK_INCREMENT)},
	{"MIN_SCROLL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollBarUI$Actions, MIN_SCROLL)},
	{"MAX_SCROLL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollBarUI$Actions, MAX_SCROLL)},
	{}
};

$MethodInfo _BasicScrollBarUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicScrollBarUI$Actions::*)($String*)>(&BasicScrollBarUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"scroll", "(Ljavax/swing/JScrollBar;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollBarUI$Actions::*)($JScrollBar*,int32_t,bool)>(&BasicScrollBarUI$Actions::scroll))},
	{}
};

$InnerClassInfo _BasicScrollBarUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$Actions", "javax.swing.plaf.basic.BasicScrollBarUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicScrollBarUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicScrollBarUI$Actions_FieldInfo_,
	_BasicScrollBarUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI"
};

$Object* allocate$BasicScrollBarUI$Actions($Class* clazz) {
	return $of($alloc(BasicScrollBarUI$Actions));
}

$String* BasicScrollBarUI$Actions::POSITIVE_UNIT_INCREMENT = nullptr;
$String* BasicScrollBarUI$Actions::POSITIVE_BLOCK_INCREMENT = nullptr;
$String* BasicScrollBarUI$Actions::NEGATIVE_UNIT_INCREMENT = nullptr;
$String* BasicScrollBarUI$Actions::NEGATIVE_BLOCK_INCREMENT = nullptr;
$String* BasicScrollBarUI$Actions::MIN_SCROLL = nullptr;
$String* BasicScrollBarUI$Actions::MAX_SCROLL = nullptr;

void BasicScrollBarUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicScrollBarUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollBar, scrollBar, $cast($JScrollBar, $nc(e)->getSource()));
	$var($String, key, getName());
	if (key == BasicScrollBarUI$Actions::POSITIVE_UNIT_INCREMENT) {
		scroll(scrollBar, 1, false);
	} else if (key == BasicScrollBarUI$Actions::POSITIVE_BLOCK_INCREMENT) {
		scroll(scrollBar, 1, true);
	} else if (key == BasicScrollBarUI$Actions::NEGATIVE_UNIT_INCREMENT) {
		scroll(scrollBar, -1, false);
	} else if (key == BasicScrollBarUI$Actions::NEGATIVE_BLOCK_INCREMENT) {
		scroll(scrollBar, -1, true);
	} else if (key == BasicScrollBarUI$Actions::MIN_SCROLL) {
		scroll(scrollBar, $BasicScrollBarUI::MIN_SCROLL, true);
	} else if (key == BasicScrollBarUI$Actions::MAX_SCROLL) {
		scroll(scrollBar, $BasicScrollBarUI::MAX_SCROLL, true);
	}
}

void BasicScrollBarUI$Actions::scroll($JScrollBar* scrollBar, int32_t dir, bool block) {
	if (dir == -1 || dir == 1) {
		int32_t amount = 0;
		if (block) {
			if (dir == -1) {
				amount = -1 * $nc(scrollBar)->getBlockIncrement(-1);
			} else {
				amount = $nc(scrollBar)->getBlockIncrement(1);
			}
		} else if (dir == -1) {
			amount = -1 * $nc(scrollBar)->getUnitIncrement(-1);
		} else {
			amount = $nc(scrollBar)->getUnitIncrement(1);
		}
		$nc(scrollBar)->setValue(scrollBar->getValue() + amount);
	} else if (dir == $BasicScrollBarUI::MIN_SCROLL) {
		$nc(scrollBar)->setValue(scrollBar->getMinimum());
	} else if (dir == $BasicScrollBarUI::MAX_SCROLL) {
		$nc(scrollBar)->setValue(scrollBar->getMaximum());
	}
}

BasicScrollBarUI$Actions::BasicScrollBarUI$Actions() {
}

void clinit$BasicScrollBarUI$Actions($Class* class$) {
	$assignStatic(BasicScrollBarUI$Actions::POSITIVE_UNIT_INCREMENT, "positiveUnitIncrement"_s);
	$assignStatic(BasicScrollBarUI$Actions::POSITIVE_BLOCK_INCREMENT, "positiveBlockIncrement"_s);
	$assignStatic(BasicScrollBarUI$Actions::NEGATIVE_UNIT_INCREMENT, "negativeUnitIncrement"_s);
	$assignStatic(BasicScrollBarUI$Actions::NEGATIVE_BLOCK_INCREMENT, "negativeBlockIncrement"_s);
	$assignStatic(BasicScrollBarUI$Actions::MIN_SCROLL, "minScroll"_s);
	$assignStatic(BasicScrollBarUI$Actions::MAX_SCROLL, "maxScroll"_s);
}

$Class* BasicScrollBarUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI$Actions, name, initialize, &_BasicScrollBarUI$Actions_ClassInfo_, clinit$BasicScrollBarUI$Actions, allocate$BasicScrollBarUI$Actions);
	return class$;
}

$Class* BasicScrollBarUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax