#include <com/apple/laf/AquaTextFieldUI.h>

#include <com/apple/laf/AquaCaret.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <com/apple/laf/AquaTextFieldBorder.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$JComponentPainter.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <jcpp.h>

using $AquaCaret = ::com::apple::laf::AquaCaret;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaHighlighter = ::com::apple::laf::AquaHighlighter;
using $AquaKeyBindings = ::com::apple::laf::AquaKeyBindings;
using $AquaTextFieldBorder = ::com::apple::laf::AquaTextFieldBorder;
using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$JComponentPainter = ::com::apple::laf::AquaUtils$JComponentPainter;
using $Graphics = ::java::awt::Graphics;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldUI_FieldInfo_[] = {
	{"delegate", "Lcom/apple/laf/AquaUtils$JComponentPainter;", nullptr, $PROTECTED, $field(AquaTextFieldUI, delegate)},
	{"handler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, $PROTECTED, $field(AquaTextFieldUI, handler)},
	{"oldDragState", "Z", nullptr, 0, $field(AquaTextFieldUI, oldDragState)},
	{}
};

$MethodInfo _AquaTextFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldUI::*)()>(&AquaTextFieldUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createHighlighter", "()Ljavax/swing/text/Highlighter;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTextFieldUI::createUI))},
	{"getVisibleEditorRect", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBackgroundSafely", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintSafely", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"setPaintingDelegate", "(Lcom/apple/laf/AquaUtils$JComponentPainter;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextFieldUI",
	"javax.swing.plaf.basic.BasicTextFieldUI",
	nullptr,
	_AquaTextFieldUI_FieldInfo_,
	_AquaTextFieldUI_MethodInfo_
};

$Object* allocate$AquaTextFieldUI($Class* clazz) {
	return $of($alloc(AquaTextFieldUI));
}

void AquaTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
	this->oldDragState = false;
}

$ComponentUI* AquaTextFieldUI::createUI($JComponent* c) {
	$init(AquaTextFieldUI);
	return $new(AquaTextFieldUI);
}

void AquaTextFieldUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$BasicTextFieldUI::installListeners();
	$set(this, handler, $new($AquaFocusHandler));
	$var($JTextComponent, c, getComponent());
	$nc(c)->addFocusListener(this->handler);
	c->addPropertyChangeListener(this->handler);
	$LookAndFeel::installProperty(c, "opaque"_s, $($Boolean::valueOf($UIManager::getBoolean($$str({$(getPropertyPrefix()), "opaque"_s})))));
	$AquaUtilControlSize::addSizePropertyListener(c);
	$AquaTextFieldSearch::installSearchFieldListener(c);
}

void AquaTextFieldUI::uninstallListeners() {
	$var($JTextComponent, c, getComponent());
	$AquaTextFieldSearch::uninstallSearchFieldListener(c);
	$AquaUtilControlSize::removeSizePropertyListener(c);
	$nc(c)->removeFocusListener(this->handler);
	c->removePropertyChangeListener(this->handler);
	$set(this, handler, nullptr);
	$BasicTextFieldUI::uninstallListeners();
}

void AquaTextFieldUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	if (!$GraphicsEnvironment::isHeadless()) {
		this->oldDragState = $nc($(getComponent()))->getDragEnabled();
		$nc($(getComponent()))->setDragEnabled(true);
	}
	$BasicTextFieldUI::installDefaults();
}

void AquaTextFieldUI::uninstallDefaults() {
	$BasicTextFieldUI::uninstallDefaults();
	if (!$GraphicsEnvironment::isHeadless()) {
		$nc($(getComponent()))->setDragEnabled(this->oldDragState);
	}
}

void AquaTextFieldUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$BasicTextFieldUI::installKeyboardActions();
	$nc($($AquaKeyBindings::instance()))->setDefaultAction($(getKeymapName()));
}

$Rectangle* AquaTextFieldUI::getVisibleEditorRect() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rect, $BasicTextFieldUI::getVisibleEditorRect());
	if (rect == nullptr) {
		return nullptr;
	}
	if (!$nc($(getComponent()))->isOpaque()) {
		$nc(rect)->y -= 3;
		rect->height += 6;
	}
	return rect;
}

void AquaTextFieldUI::paintSafely($Graphics* g) {
	paintBackgroundSafely(g);
	$BasicTextFieldUI::paintSafely(g);
}

void AquaTextFieldUI::paintBackgroundSafely($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, c, getComponent());
	int32_t width = $nc(c)->getWidth();
	int32_t height = c->getHeight();
	if (this->delegate != nullptr) {
		$nc(this->delegate)->paint(c, g, 0, 0, width, height);
		return;
	}
	bool isOpaque = c->isOpaque();
	if (!($instanceOf($AquaTextFieldBorder, $(c->getBorder())))) {
		if (!isOpaque && $AquaUtils::hasOpaqueBeenExplicitlySet(c)) {
			return;
		}
		$nc(g)->setColor($(c->getBackground()));
		g->fillRect(0, 0, width, height);
		return;
	}
	$nc(g)->setColor($(c->getBackground()));
	if (isOpaque) {
		g->fillRect(0, 0, width, height);
		return;
	}
	$var($Insets, margin, c->getMargin());
	$var($Insets, insets, c->getInsets());
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	if (margin != nullptr) {
		$nc(insets)->top -= margin->top;
		insets->left -= margin->left;
		insets->bottom -= margin->bottom;
		insets->right -= margin->right;
	}
	int32_t shrinkage = $AquaTextFieldBorder::getShrinkageFor(c, height);
	g->fillRect($nc(insets)->left - 2, insets->top - shrinkage - 1, width - insets->right - insets->left + 4, height - insets->bottom - insets->top + shrinkage * 2 + 2);
}

void AquaTextFieldUI::paintBackground($Graphics* g) {
}

$Caret* AquaTextFieldUI::createCaret() {
	return $new($AquaCaret);
}

$Highlighter* AquaTextFieldUI::createHighlighter() {
	return $new($AquaHighlighter);
}

void AquaTextFieldUI::setPaintingDelegate($AquaUtils$JComponentPainter* delegate) {
	$set(this, delegate, delegate);
}

AquaTextFieldUI::AquaTextFieldUI() {
}

$Class* AquaTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldUI, name, initialize, &_AquaTextFieldUI_ClassInfo_, allocate$AquaTextFieldUI);
	return class$;
}

$Class* AquaTextFieldUI::class$ = nullptr;

		} // laf
	} // apple
} // com