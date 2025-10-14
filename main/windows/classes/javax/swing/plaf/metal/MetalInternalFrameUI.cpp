#include <javax/swing/plaf/metal/MetalInternalFrameUI.h>

#include <java/awt/Container.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$BorderListener.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane.h>
#include <javax/swing/plaf/metal/MetalInternalFrameUI$BorderListener1.h>
#include <javax/swing/plaf/metal/MetalInternalFrameUI$MetalPropertyChangeHandler.h>
#include <jcpp.h>

#undef FRAME_TYPE
#undef IS_PALETTE
#undef IS_PALETTE_KEY
#undef NORMAL_FRAME
#undef OPTION_DIALOG
#undef PALETTE_FRAME

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$BorderListener = ::javax::swing::plaf::basic::BasicInternalFrameUI$BorderListener;
using $MetalInternalFrameTitlePane = ::javax::swing::plaf::metal::MetalInternalFrameTitlePane;
using $MetalInternalFrameUI$BorderListener1 = ::javax::swing::plaf::metal::MetalInternalFrameUI$BorderListener1;
using $MetalInternalFrameUI$MetalPropertyChangeHandler = ::javax::swing::plaf::metal::MetalInternalFrameUI$MetalPropertyChangeHandler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalInternalFrameUI_FieldInfo_[] = {
	{"metalPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalInternalFrameUI, metalPropertyChangeListener)},
	{"handyEmptyBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalInternalFrameUI, handyEmptyBorder)},
	{"IS_PALETTE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(MetalInternalFrameUI, IS_PALETTE)},
	{"IS_PALETTE_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MetalInternalFrameUI, IS_PALETTE_KEY)},
	{"FRAME_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MetalInternalFrameUI, FRAME_TYPE)},
	{"NORMAL_FRAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MetalInternalFrameUI, NORMAL_FRAME)},
	{"PALETTE_FRAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MetalInternalFrameUI, PALETTE_FRAME)},
	{"OPTION_DIALOG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MetalInternalFrameUI, OPTION_DIALOG)},
	{}
};

$MethodInfo _MetalInternalFrameUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalInternalFrameUI::*)($JInternalFrame*)>(&MetalInternalFrameUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameUI*)>(&MetalInternalFrameUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$BasicInternalFrameTitlePane*(*)(MetalInternalFrameUI*)>(&MetalInternalFrameUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameUI*)>(&MetalInternalFrameUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$BasicInternalFrameTitlePane*(*)(MetalInternalFrameUI*)>(&MetalInternalFrameUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameUI*)>(&MetalInternalFrameUI::access$400))},
	{"access$500", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameUI*)>(&MetalInternalFrameUI::access$500))},
	{"access$600", "(Ljavax/swing/plaf/metal/MetalInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameUI*)>(&MetalInternalFrameUI::access$600))},
	{"createBorderListener", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/event/MouseInputAdapter;", nullptr, $PROTECTED},
	{"createNorthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalInternalFrameUI::createUI))},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setFrameType", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalInternalFrameUI::*)($String*)>(&MetalInternalFrameUI::setFrameType))},
	{"setPalette", "(Z)V", nullptr, $PUBLIC},
	{"stripContentBorder", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalInternalFrameUI::*)(Object$*)>(&MetalInternalFrameUI::stripContentBorder))},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalInternalFrameUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalInternalFrameUI$BorderListener1", "javax.swing.plaf.metal.MetalInternalFrameUI", "BorderListener1", $PRIVATE},
	{"javax.swing.plaf.metal.MetalInternalFrameUI$MetalPropertyChangeHandler", "javax.swing.plaf.metal.MetalInternalFrameUI", "MetalPropertyChangeHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalInternalFrameUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalInternalFrameUI",
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	nullptr,
	_MetalInternalFrameUI_FieldInfo_,
	_MetalInternalFrameUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalInternalFrameUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalInternalFrameUI$BorderListener1,javax.swing.plaf.metal.MetalInternalFrameUI$MetalPropertyChangeHandler"
};

$Object* allocate$MetalInternalFrameUI($Class* clazz) {
	return $of($alloc(MetalInternalFrameUI));
}

$PropertyChangeListener* MetalInternalFrameUI::metalPropertyChangeListener = nullptr;
$Border* MetalInternalFrameUI::handyEmptyBorder = nullptr;

$String* MetalInternalFrameUI::IS_PALETTE = nullptr;
$String* MetalInternalFrameUI::IS_PALETTE_KEY = nullptr;
$String* MetalInternalFrameUI::FRAME_TYPE = nullptr;
$String* MetalInternalFrameUI::NORMAL_FRAME = nullptr;
$String* MetalInternalFrameUI::PALETTE_FRAME = nullptr;
$String* MetalInternalFrameUI::OPTION_DIALOG = nullptr;

$JInternalFrame* MetalInternalFrameUI::access$600(MetalInternalFrameUI* x0) {
	$init(MetalInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameUI::access$500(MetalInternalFrameUI* x0) {
	$init(MetalInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameUI::access$400(MetalInternalFrameUI* x0) {
	$init(MetalInternalFrameUI);
	return $nc(x0)->frame;
}

$BasicInternalFrameTitlePane* MetalInternalFrameUI::access$300(MetalInternalFrameUI* x0) {
	$init(MetalInternalFrameUI);
	return $nc(x0)->titlePane;
}

$JInternalFrame* MetalInternalFrameUI::access$200(MetalInternalFrameUI* x0) {
	$init(MetalInternalFrameUI);
	return $nc(x0)->frame;
}

$BasicInternalFrameTitlePane* MetalInternalFrameUI::access$100(MetalInternalFrameUI* x0) {
	$init(MetalInternalFrameUI);
	return $nc(x0)->titlePane;
}

$JInternalFrame* MetalInternalFrameUI::access$000(MetalInternalFrameUI* x0) {
	$init(MetalInternalFrameUI);
	return $nc(x0)->frame;
}

void MetalInternalFrameUI::init$($JInternalFrame* b) {
	$BasicInternalFrameUI::init$(b);
}

$ComponentUI* MetalInternalFrameUI::createUI($JComponent* c) {
	$init(MetalInternalFrameUI);
	return $new(MetalInternalFrameUI, $cast($JInternalFrame, c));
}

void MetalInternalFrameUI::installUI($JComponent* c) {
	$BasicInternalFrameUI::installUI(c);
	$var($Object, paletteProp, $nc(c)->getClientProperty(MetalInternalFrameUI::IS_PALETTE_KEY));
	if (paletteProp != nullptr) {
		setPalette($nc(($cast($Boolean, paletteProp)))->booleanValue());
	}
	$var($Container, content, $nc(this->frame)->getContentPane());
	stripContentBorder(content);
}

void MetalInternalFrameUI::uninstallUI($JComponent* c) {
	$set(this, frame, $cast($JInternalFrame, c));
	$var($Container, cont, $nc((($cast($JInternalFrame, c))))->getContentPane());
	if ($instanceOf($JComponent, cont)) {
		$var($JComponent, content, $cast($JComponent, cont));
		if ($nc(content)->getBorder() == MetalInternalFrameUI::handyEmptyBorder) {
			content->setBorder(nullptr);
		}
	}
	$BasicInternalFrameUI::uninstallUI(c);
}

void MetalInternalFrameUI::installListeners() {
	$BasicInternalFrameUI::installListeners();
	$nc(this->frame)->addPropertyChangeListener(MetalInternalFrameUI::metalPropertyChangeListener);
}

void MetalInternalFrameUI::uninstallListeners() {
	$nc(this->frame)->removePropertyChangeListener(MetalInternalFrameUI::metalPropertyChangeListener);
	$BasicInternalFrameUI::uninstallListeners();
}

void MetalInternalFrameUI::installKeyboardActions() {
	$BasicInternalFrameUI::installKeyboardActions();
	$var($ActionMap, map, $SwingUtilities::getUIActionMap(this->frame));
	if (map != nullptr) {
		map->remove("showSystemMenu"_s);
	}
}

void MetalInternalFrameUI::uninstallKeyboardActions() {
	$BasicInternalFrameUI::uninstallKeyboardActions();
}

void MetalInternalFrameUI::uninstallComponents() {
	$set(this, titlePane, nullptr);
	$BasicInternalFrameUI::uninstallComponents();
}

void MetalInternalFrameUI::stripContentBorder(Object$* c) {
	if ($instanceOf($JComponent, c)) {
		$var($JComponent, contentComp, $cast($JComponent, c));
		$var($Border, contentBorder, $nc(contentComp)->getBorder());
		if (contentBorder == nullptr || $instanceOf($UIResource, contentBorder)) {
			contentComp->setBorder(MetalInternalFrameUI::handyEmptyBorder);
		}
	}
}

$JComponent* MetalInternalFrameUI::createNorthPane($JInternalFrame* w) {
	return $new($MetalInternalFrameTitlePane, w);
}

void MetalInternalFrameUI::setFrameType($String* frameType) {
	if ($nc(frameType)->equals(MetalInternalFrameUI::OPTION_DIALOG)) {
		$LookAndFeel::installBorder(this->frame, "InternalFrame.optionDialogBorder"_s);
		$nc(($cast($MetalInternalFrameTitlePane, this->titlePane)))->setPalette(false);
	} else if (frameType->equals(MetalInternalFrameUI::PALETTE_FRAME)) {
		$LookAndFeel::installBorder(this->frame, "InternalFrame.paletteBorder"_s);
		$nc(($cast($MetalInternalFrameTitlePane, this->titlePane)))->setPalette(true);
	} else {
		$LookAndFeel::installBorder(this->frame, "InternalFrame.border"_s);
		$nc(($cast($MetalInternalFrameTitlePane, this->titlePane)))->setPalette(false);
	}
}

void MetalInternalFrameUI::setPalette(bool isPalette) {
	if (isPalette) {
		$LookAndFeel::installBorder(this->frame, "InternalFrame.paletteBorder"_s);
	} else {
		$LookAndFeel::installBorder(this->frame, "InternalFrame.border"_s);
	}
	$nc(($cast($MetalInternalFrameTitlePane, this->titlePane)))->setPalette(isPalette);
}

$MouseInputAdapter* MetalInternalFrameUI::createBorderListener($JInternalFrame* w) {
	return $new($MetalInternalFrameUI$BorderListener1, this);
}

void clinit$MetalInternalFrameUI($Class* class$) {
	$assignStatic(MetalInternalFrameUI::metalPropertyChangeListener, $new($MetalInternalFrameUI$MetalPropertyChangeHandler));
	$assignStatic(MetalInternalFrameUI::handyEmptyBorder, $new($EmptyBorder, 0, 0, 0, 0));
	$assignStatic(MetalInternalFrameUI::IS_PALETTE, "JInternalFrame.isPalette"_s);
	$assignStatic(MetalInternalFrameUI::IS_PALETTE_KEY, "JInternalFrame.isPalette"_s);
	$assignStatic(MetalInternalFrameUI::FRAME_TYPE, "JInternalFrame.frameType"_s);
	$assignStatic(MetalInternalFrameUI::NORMAL_FRAME, "normal"_s);
	$assignStatic(MetalInternalFrameUI::PALETTE_FRAME, "palette"_s);
	$assignStatic(MetalInternalFrameUI::OPTION_DIALOG, "optionDialog"_s);
}

MetalInternalFrameUI::MetalInternalFrameUI() {
}

$Class* MetalInternalFrameUI::load$($String* name, bool initialize) {
	$loadClass(MetalInternalFrameUI, name, initialize, &_MetalInternalFrameUI_ClassInfo_, clinit$MetalInternalFrameUI, allocate$MetalInternalFrameUI);
	return class$;
}

$Class* MetalInternalFrameUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax