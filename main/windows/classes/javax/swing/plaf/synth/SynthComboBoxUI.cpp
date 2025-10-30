#include <javax/swing/plaf/synth/SynthComboBoxUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI$ButtonHandler.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI$EditorFocusHandler.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI$SynthComboBoxEditor.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI$SynthComboBoxRenderer.h>
#include <javax/swing/plaf/synth/SynthComboPopup.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef DISABLED
#undef ENABLED
#undef FOCUSED
#undef MOUSE_OVER
#undef PRESSED
#undef SOUTH

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $SwingConstants = ::javax::swing::SwingConstants;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthComboBoxUI$ButtonHandler = ::javax::swing::plaf::synth::SynthComboBoxUI$ButtonHandler;
using $SynthComboBoxUI$EditorFocusHandler = ::javax::swing::plaf::synth::SynthComboBoxUI$EditorFocusHandler;
using $SynthComboBoxUI$SynthComboBoxEditor = ::javax::swing::plaf::synth::SynthComboBoxUI$SynthComboBoxEditor;
using $SynthComboBoxUI$SynthComboBoxRenderer = ::javax::swing::plaf::synth::SynthComboBoxUI$SynthComboBoxRenderer;
using $SynthComboPopup = ::javax::swing::plaf::synth::SynthComboPopup;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthComboBoxUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthComboBoxUI, style)},
	{"useListColors", "Z", nullptr, $PRIVATE, $field(SynthComboBoxUI, useListColors)},
	{"popupInsets", "Ljava/awt/Insets;", nullptr, 0, $field(SynthComboBoxUI, popupInsets)},
	{"buttonWhenNotEditable", "Z", nullptr, $PRIVATE, $field(SynthComboBoxUI, buttonWhenNotEditable)},
	{"pressedWhenPopupVisible", "Z", nullptr, $PRIVATE, $field(SynthComboBoxUI, pressedWhenPopupVisible)},
	{"buttonHandler", "Ljavax/swing/plaf/synth/SynthComboBoxUI$ButtonHandler;", nullptr, $PRIVATE, $field(SynthComboBoxUI, buttonHandler)},
	{"editorFocusHandler", "Ljavax/swing/plaf/synth/SynthComboBoxUI$EditorFocusHandler;", nullptr, $PRIVATE, $field(SynthComboBoxUI, editorFocusHandler)},
	{"forceOpaque", "Z", nullptr, $PRIVATE, $field(SynthComboBoxUI, forceOpaque)},
	{}
};

$MethodInfo _SynthComboBoxUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthComboBoxUI::*)()>(&SynthComboBoxUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$400))},
	{"access$500", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$500))},
	{"access$600", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$600))},
	{"access$700", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(SynthComboBoxUI*)>(&SynthComboBoxUI::access$700))},
	{"createArrowButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createEditor", "()Ljavax/swing/ComboBoxEditor;", nullptr, $PROTECTED},
	{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED},
	{"createRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;", $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthComboBoxUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthComboBoxUI::*)($JComponent*)>(&SynthComboBoxUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthComboBoxUI::*)($JComponent*,int32_t)>(&SynthComboBoxUI::getContext))},
	{"getDefaultSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCurrentValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"shouldActLikeButton", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SynthComboBoxUI::*)()>(&SynthComboBoxUI::shouldActLikeButton))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<*>;)V", $PRIVATE, $method(static_cast<void(SynthComboBoxUI::*)($JComboBox*)>(&SynthComboBoxUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthComboBoxUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthComboBoxUI$EditorFocusHandler", "javax.swing.plaf.synth.SynthComboBoxUI", "EditorFocusHandler", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.SynthComboBoxUI$ButtonHandler", "javax.swing.plaf.synth.SynthComboBoxUI", "ButtonHandler", $PRIVATE | $FINAL},
	{"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxEditor", "javax.swing.plaf.synth.SynthComboBoxUI", "SynthComboBoxEditor", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxRenderer", "javax.swing.plaf.synth.SynthComboBoxUI", "SynthComboBoxRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthComboBoxUI",
	"javax.swing.plaf.basic.BasicComboBoxUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthComboBoxUI_FieldInfo_,
	_SynthComboBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthComboBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthComboBoxUI$EditorFocusHandler,javax.swing.plaf.synth.SynthComboBoxUI$ButtonHandler,javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxEditor,javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxRenderer"
};

$Object* allocate$SynthComboBoxUI($Class* clazz) {
	return $of($alloc(SynthComboBoxUI));
}

int32_t SynthComboBoxUI::hashCode() {
	 return this->$BasicComboBoxUI::hashCode();
}

bool SynthComboBoxUI::equals(Object$* arg0) {
	 return this->$BasicComboBoxUI::equals(arg0);
}

$Object* SynthComboBoxUI::clone() {
	 return this->$BasicComboBoxUI::clone();
}

$String* SynthComboBoxUI::toString() {
	 return this->$BasicComboBoxUI::toString();
}

void SynthComboBoxUI::finalize() {
	this->$BasicComboBoxUI::finalize();
}

$JComboBox* SynthComboBoxUI::access$700(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* SynthComboBoxUI::access$600(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* SynthComboBoxUI::access$500(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* SynthComboBoxUI::access$400(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* SynthComboBoxUI::access$300(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* SynthComboBoxUI::access$200(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* SynthComboBoxUI::access$100(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* SynthComboBoxUI::access$000(SynthComboBoxUI* x0) {
	$init(SynthComboBoxUI);
	return $nc(x0)->comboBox;
}

void SynthComboBoxUI::init$() {
	$BasicComboBoxUI::init$();
	this->forceOpaque = false;
}

$ComponentUI* SynthComboBoxUI::createUI($JComponent* c) {
	$init(SynthComboBoxUI);
	return $new(SynthComboBoxUI);
}

void SynthComboBoxUI::installUI($JComponent* c) {
	$set(this, buttonHandler, $new($SynthComboBoxUI$ButtonHandler, this));
	$BasicComboBoxUI::installUI(c);
}

void SynthComboBoxUI::installDefaults() {
	updateStyle(this->comboBox);
}

void SynthComboBoxUI::updateStyle($JComboBox* comboBox) {
	$useLocalCurrentObjectStackCache();
	$var($SynthStyle, oldStyle, this->style);
	$var($SynthContext, context, getContext(comboBox, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$set(this, padding, $cast($Insets, $nc(this->style)->get(context, "ComboBox.padding"_s)));
		$set(this, popupInsets, $cast($Insets, $nc(this->style)->get(context, "ComboBox.popupInsets"_s)));
		this->useListColors = $nc(this->style)->getBoolean(context, "ComboBox.rendererUseListColors"_s, true);
		this->buttonWhenNotEditable = $nc(this->style)->getBoolean(context, "ComboBox.buttonWhenNotEditable"_s, false);
		this->pressedWhenPopupVisible = $nc(this->style)->getBoolean(context, "ComboBox.pressedWhenPopupVisible"_s, false);
		this->squareButton = $nc(this->style)->getBoolean(context, "ComboBox.squareButton"_s, true);
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
		this->forceOpaque = $nc(this->style)->getBoolean(context, "ComboBox.forceOpaque"_s, false);
	}
	if (this->listBox != nullptr) {
		$SynthLookAndFeel::updateStyles(this->listBox);
	}
}

void SynthComboBoxUI::installListeners() {
	$nc(this->comboBox)->addPropertyChangeListener(this);
	$nc(this->comboBox)->addMouseListener(this->buttonHandler);
	$set(this, editorFocusHandler, $new($SynthComboBoxUI$EditorFocusHandler, this->comboBox));
	$BasicComboBoxUI::installListeners();
}

void SynthComboBoxUI::uninstallUI($JComponent* c) {
	if ($instanceOf($SynthComboPopup, this->popup)) {
		$nc(($cast($SynthComboPopup, this->popup)))->removePopupMenuListener(this->buttonHandler);
	}
	$BasicComboBoxUI::uninstallUI(c);
	$set(this, buttonHandler, nullptr);
}

void SynthComboBoxUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->comboBox, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthComboBoxUI::uninstallListeners() {
	$nc(this->editorFocusHandler)->unregister();
	$nc(this->comboBox)->removePropertyChangeListener(this);
	$nc(this->comboBox)->removeMouseListener(this->buttonHandler);
	$nc(this->buttonHandler)->pressed = false;
	$nc(this->buttonHandler)->over = false;
	$BasicComboBoxUI::uninstallListeners();
}

$SynthContext* SynthComboBoxUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthComboBoxUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthComboBoxUI::getComponentState($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JComboBox, c))) {
		return $SynthLookAndFeel::getComponentState(c);
	}
	$var($JComboBox, box, $cast($JComboBox, c));
	if (shouldActLikeButton()) {
		int32_t state = $SynthConstants::ENABLED;
		if (!$nc(c)->isEnabled()) {
			state = $SynthConstants::DISABLED;
		}
		if ($nc(this->buttonHandler)->isPressed()) {
			state |= $SynthConstants::PRESSED;
		}
		if ($nc(this->buttonHandler)->isRollover()) {
			state |= $SynthConstants::MOUSE_OVER;
		}
		if ($nc(box)->isFocusOwner()) {
			state |= $SynthConstants::FOCUSED;
		}
		return state;
	} else {
		int32_t basicState = $SynthLookAndFeel::getComponentState(c);
		bool var$0 = $nc(box)->isEditable();
		if (var$0 && $nc($($nc($(box->getEditor()))->getEditorComponent()))->isFocusOwner()) {
			basicState |= $SynthConstants::FOCUSED;
		}
		return basicState;
	}
}

$ComboPopup* SynthComboBoxUI::createPopup() {
	$var($SynthComboPopup, p, $new($SynthComboPopup, this->comboBox));
	p->addPopupMenuListener(this->buttonHandler);
	return p;
}

$ListCellRenderer* SynthComboBoxUI::createRenderer() {
	return $new($SynthComboBoxUI$SynthComboBoxRenderer, this);
}

$ComboBoxEditor* SynthComboBoxUI::createEditor() {
	return $new($SynthComboBoxUI$SynthComboBoxEditor);
}

void SynthComboBoxUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle(this->comboBox);
	}
}

$JButton* SynthComboBoxUI::createArrowButton() {
	$var($SynthArrowButton, button, $new($SynthArrowButton, $SwingConstants::SOUTH));
	button->setName("ComboBox.arrowButton"_s);
	button->setModel(this->buttonHandler);
	return button;
}

void SynthComboBoxUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintComboBoxBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthComboBoxUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthComboBoxUI::paint($SynthContext* context, $Graphics* g) {
	this->hasFocus = $nc(this->comboBox)->hasFocus();
	if (!$nc(this->comboBox)->isEditable()) {
		$var($Rectangle, r, rectangleForCurrentValue());
		paintCurrentValue(g, r, this->hasFocus);
	}
	$nc(this->currentValuePane)->removeAll();
}

void SynthComboBoxUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintComboBoxBorder(context, g, x, y, w, h);
}

void SynthComboBoxUI::paintCurrentValue($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
	$var($Component, c, nullptr);
	$assign(c, $nc(renderer)->getListCellRendererComponent(this->listBox, $($nc(this->comboBox)->getSelectedItem()), -1, false, false));
	bool shouldValidate = false;
	if ($instanceOf($JPanel, c)) {
		shouldValidate = true;
	}
	if ($instanceOf($UIResource, c)) {
		$nc(c)->setName("ComboBox.renderer"_s);
	}
	bool force = this->forceOpaque && $instanceOf($JComponent, c);
	if (force) {
		$nc(($cast($JComponent, c)))->setOpaque(false);
	}
	int32_t x = $nc(bounds)->x;
	int32_t y = bounds->y;
	int32_t w = bounds->width;
	int32_t h = bounds->height;
	if (this->padding != nullptr) {
		x = bounds->x + $nc(this->padding)->left;
		y = bounds->y + $nc(this->padding)->top;
		w = bounds->width - ($nc(this->padding)->left + $nc(this->padding)->right);
		h = bounds->height - ($nc(this->padding)->top + $nc(this->padding)->bottom);
	}
	$nc(this->currentValuePane)->paintComponent(g, c, this->comboBox, x, y, w, h, shouldValidate);
	if (force) {
		$nc(($cast($JComponent, c)))->setOpaque(true);
	}
}

bool SynthComboBoxUI::shouldActLikeButton() {
	return this->buttonWhenNotEditable && !$nc(this->comboBox)->isEditable();
}

$Dimension* SynthComboBoxUI::getDefaultSize() {
	$useLocalCurrentObjectStackCache();
	$var($SynthComboBoxUI$SynthComboBoxRenderer, r, $new($SynthComboBoxUI$SynthComboBoxRenderer, this));
	$var($Dimension, d, getSizeForComponent($(r->getListCellRendererComponent(this->listBox, " "_s, -1, false, false))));
	return $new($Dimension, $nc(d)->width, d->height);
}

SynthComboBoxUI::SynthComboBoxUI() {
}

$Class* SynthComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(SynthComboBoxUI, name, initialize, &_SynthComboBoxUI_ClassInfo_, allocate$SynthComboBoxUI);
	return class$;
}

$Class* SynthComboBoxUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax