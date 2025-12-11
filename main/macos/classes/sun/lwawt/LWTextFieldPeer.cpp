#include <sun/lwawt/LWTextFieldPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/TextComponent.h>
#include <java/awt/TextField.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWTextComponentPeer.h>
#include <sun/lwawt/LWTextFieldPeer$JPasswordFieldDelegate.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef FOCUS_LOST
#undef WHEN_FOCUSED

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $TextComponent = ::java::awt::TextComponent;
using $TextField = ::java::awt::TextField;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Region = ::sun::java2d::pipe::Region;
using $LWTextComponentPeer = ::sun::lwawt::LWTextComponentPeer;
using $LWTextFieldPeer$JPasswordFieldDelegate = ::sun::lwawt::LWTextFieldPeer$JPasswordFieldDelegate;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$MethodInfo _LWTextFieldPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getCaretPosition", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC | $FINAL},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getSelectionEnd", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getSelectionStart", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TextField;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWTextFieldPeer::*)($TextField*,$PlatformComponent*)>(&LWTextFieldPeer::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"createDelegate", "()Ljavax/swing/JPasswordField;", nullptr, 0},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTextComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, $PUBLIC},
	{"handleJavaFocusEvent", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*select", "(II)V", nullptr, $PUBLIC | $FINAL},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setCaretPosition", "(I)V", nullptr, $PUBLIC | $FINAL},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC},
	{"*setEditable", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"*setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWTextFieldPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWTextFieldPeer$JPasswordFieldDelegate", "sun.lwawt.LWTextFieldPeer", "JPasswordFieldDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWTextFieldPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWTextFieldPeer",
	"sun.lwawt.LWTextComponentPeer",
	"java.awt.peer.TextFieldPeer,java.awt.event.ActionListener",
	nullptr,
	_LWTextFieldPeer_MethodInfo_,
	"Lsun/lwawt/LWTextComponentPeer<Ljava/awt/TextField;Ljavax/swing/JPasswordField;>;Ljava/awt/peer/TextFieldPeer;Ljava/awt/event/ActionListener;",
	nullptr,
	_LWTextFieldPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWTextFieldPeer$JPasswordFieldDelegate"
};

$Object* allocate$LWTextFieldPeer($Class* clazz) {
	return $of($alloc(LWTextFieldPeer));
}

void LWTextFieldPeer::setEditable(bool editable) {
	this->$LWTextComponentPeer::setEditable(editable);
}

$String* LWTextFieldPeer::getText() {
	 return this->$LWTextComponentPeer::getText();
}

void LWTextFieldPeer::setText($String* text) {
	this->$LWTextComponentPeer::setText(text);
}

int32_t LWTextFieldPeer::getSelectionStart() {
	 return this->$LWTextComponentPeer::getSelectionStart();
}

int32_t LWTextFieldPeer::getSelectionEnd() {
	 return this->$LWTextComponentPeer::getSelectionEnd();
}

void LWTextFieldPeer::select(int32_t selStart, int32_t selEnd) {
	this->$LWTextComponentPeer::select(selStart, selEnd);
}

void LWTextFieldPeer::setCaretPosition(int32_t pos) {
	this->$LWTextComponentPeer::setCaretPosition(pos);
}

int32_t LWTextFieldPeer::getCaretPosition() {
	 return this->$LWTextComponentPeer::getCaretPosition();
}

$InputMethodRequests* LWTextFieldPeer::getInputMethodRequests() {
	 return this->$LWTextComponentPeer::getInputMethodRequests();
}

bool LWTextFieldPeer::isFocusable() {
	 return this->$LWTextComponentPeer::isFocusable();
}

void LWTextFieldPeer::dispose() {
	this->$LWTextComponentPeer::dispose();
}

$GraphicsConfiguration* LWTextFieldPeer::getGraphicsConfiguration() {
	 return this->$LWTextComponentPeer::getGraphicsConfiguration();
}

bool LWTextFieldPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWTextComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWTextFieldPeer::getGraphics() {
	 return this->$LWTextComponentPeer::getGraphics();
}

$ColorModel* LWTextFieldPeer::getColorModel() {
	 return this->$LWTextComponentPeer::getColorModel();
}

void LWTextFieldPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWTextComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWTextFieldPeer::getBackBuffer() {
	 return this->$LWTextComponentPeer::getBackBuffer();
}

void LWTextFieldPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWTextComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWTextFieldPeer::destroyBuffers() {
	this->$LWTextComponentPeer::destroyBuffers();
}

void LWTextFieldPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWTextComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWTextFieldPeer::getLocationOnScreen() {
	 return this->$LWTextComponentPeer::getLocationOnScreen();
}

void LWTextFieldPeer::setBackground($Color* c) {
	this->$LWTextComponentPeer::setBackground(c);
}

void LWTextFieldPeer::setForeground($Color* c) {
	this->$LWTextComponentPeer::setForeground(c);
}

void LWTextFieldPeer::setFont($Font* f) {
	this->$LWTextComponentPeer::setFont(f);
}

$FontMetrics* LWTextFieldPeer::getFontMetrics($Font* f) {
	 return this->$LWTextComponentPeer::getFontMetrics(f);
}

void LWTextFieldPeer::setEnabled(bool e) {
	this->$LWTextComponentPeer::setEnabled(e);
}

void LWTextFieldPeer::setVisible(bool v) {
	this->$LWTextComponentPeer::setVisible(v);
}

void LWTextFieldPeer::paint($Graphics* g) {
	this->$LWTextComponentPeer::paint(g);
}

void LWTextFieldPeer::print($Graphics* g) {
	this->$LWTextComponentPeer::print(g);
}

void LWTextFieldPeer::reparent($ContainerPeer* newContainer) {
	this->$LWTextComponentPeer::reparent(newContainer);
}

bool LWTextFieldPeer::isReparentSupported() {
	 return this->$LWTextComponentPeer::isReparentSupported();
}

void LWTextFieldPeer::setZOrder($ComponentPeer* above) {
	this->$LWTextComponentPeer::setZOrder(above);
}

void LWTextFieldPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWTextComponentPeer::coalescePaintEvent(e);
}

void LWTextFieldPeer::layout() {
	this->$LWTextComponentPeer::layout();
}

bool LWTextFieldPeer::isObscured() {
	 return this->$LWTextComponentPeer::isObscured();
}

bool LWTextFieldPeer::canDetermineObscurity() {
	 return this->$LWTextComponentPeer::canDetermineObscurity();
}

$Dimension* LWTextFieldPeer::getPreferredSize() {
	 return this->$LWTextComponentPeer::getPreferredSize();
}

$Dimension* LWTextFieldPeer::getMinimumSize() {
	 return this->$LWTextComponentPeer::getMinimumSize();
}

void LWTextFieldPeer::updateCursorImmediately() {
	this->$LWTextComponentPeer::updateCursorImmediately();
}

bool LWTextFieldPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWTextComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWTextFieldPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWTextComponentPeer::createImage(width, height);
}

$VolatileImage* LWTextFieldPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWTextComponentPeer::createVolatileImage(w, h);
}

bool LWTextFieldPeer::handlesWheelScrolling() {
	 return this->$LWTextComponentPeer::handlesWheelScrolling();
}

void LWTextFieldPeer::applyShape($Region* shape) {
	this->$LWTextComponentPeer::applyShape(shape);
}

void LWTextFieldPeer::handleEvent($AWTEvent* e) {
	this->$LWTextComponentPeer::handleEvent(e);
}

int32_t LWTextFieldPeer::hashCode() {
	 return this->$LWTextComponentPeer::hashCode();
}

bool LWTextFieldPeer::equals(Object$* arg0) {
	 return this->$LWTextComponentPeer::equals(arg0);
}

$Object* LWTextFieldPeer::clone() {
	 return this->$LWTextComponentPeer::clone();
}

$String* LWTextFieldPeer::toString() {
	 return this->$LWTextComponentPeer::toString();
}

void LWTextFieldPeer::finalize() {
	this->$LWTextComponentPeer::finalize();
}

void LWTextFieldPeer::init$($TextField* target, $PlatformComponent* platformComponent) {
	$LWTextComponentPeer::init$(target, platformComponent);
}

$JComponent* LWTextFieldPeer::createDelegate() {
	return $new($LWTextFieldPeer$JPasswordFieldDelegate, this);
}

void LWTextFieldPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWTextComponentPeer::initializeImpl();
	setEchoChar($nc(($cast($TextField, $(getTarget()))))->getEchoChar());
	$synchronized(getDelegateLock()) {
		$nc(($cast($JPasswordField, $(getDelegate()))))->addActionListener(this);
	}
}

$JTextComponent* LWTextFieldPeer::getTextComponent() {
	return $cast($JTextComponent, getDelegate());
}

void LWTextFieldPeer::setEchoChar(char16_t echoChar) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc(($cast($JPasswordField, $(getDelegate()))))->setEchoChar(echoChar);
		bool cutCopyAllowed = false;
		$var($String, focusInputMapKey, nullptr);
		if (echoChar != 0) {
			cutCopyAllowed = false;
			$assign(focusInputMapKey, "PasswordField.focusInputMap"_s);
		} else {
			cutCopyAllowed = true;
			$assign(focusInputMapKey, "TextField.focusInputMap"_s);
		}
		$nc(($cast($JPasswordField, $(getDelegate()))))->putClientProperty("JPasswordField.cutCopyAllowed"_s, $($Boolean::valueOf(cutCopyAllowed)));
		$var($InputMap, inputMap, $cast($InputMap, $UIManager::get(focusInputMapKey)));
		$SwingUtilities::replaceUIInputMap($(getDelegate()), $JComponent::WHEN_FOCUSED, inputMap);
	}
}

$Dimension* LWTextFieldPeer::getPreferredSize(int32_t columns) {
	return getMinimumSize(columns);
}

$Dimension* LWTextFieldPeer::getMinimumSize(int32_t columns) {
	return getMinimumSize(1, columns);
}

void LWTextFieldPeer::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of(getTarget()));
	$var($String, var$1, getText());
	int64_t var$2 = $nc(e)->getWhen();
	postEvent($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, var$1, var$2, e->getModifiers()));
}

void LWTextFieldPeer::handleJavaFocusEvent($FocusEvent* e) {
	if ($nc(e)->getID() == $FocusEvent::FOCUS_LOST) {
		setCaretPosition(0);
	}
	$LWTextComponentPeer::handleJavaFocusEvent(e);
}

LWTextFieldPeer::LWTextFieldPeer() {
}

$Class* LWTextFieldPeer::load$($String* name, bool initialize) {
	$loadClass(LWTextFieldPeer, name, initialize, &_LWTextFieldPeer_ClassInfo_, allocate$LWTextFieldPeer);
	return class$;
}

$Class* LWTextFieldPeer::class$ = nullptr;

	} // lwawt
} // sun