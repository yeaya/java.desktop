#include <sun/awt/X11/XFileDialogPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Button.h>
#include <java/awt/Canvas.h>
#include <java/awt/Choice.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Label.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/List.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/TextComponent.h>
#include <java/awt/TextField.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/io/IOException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/EventObject.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/swing/UIDefaults.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/FileDialogFilter.h>
#include <sun/awt/X11/ListHelper.h>
#include <sun/awt/X11/Separator.h>
#include <sun/awt/X11/XChoicePeer.h>
#include <sun/awt/X11/XChoicePeerListener.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XDialogPeer.h>
#include <sun/awt/X11/XFileDialogPeer$1.h>
#include <sun/awt/X11/XFileDialogPeer$2.h>
#include <sun/awt/X11/XFileDialogPeer$3.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributesData.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BOTH
#undef CENTER
#undef DESELECTED
#undef DIALOG
#undef EAST
#undef FINE
#undef HORIZONTAL
#undef ITEM_STATE_CHANGED
#undef KEY_PRESSED
#undef NONE
#undef PATH_CHOICE_WIDTH
#undef PLAIN
#undef SAVE
#undef VK_ESCAPE
#undef WEST

using $FileArray = $Array<::java::io::File>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Button = ::java::awt::Button;
using $Canvas = ::java::awt::Canvas;
using $Choice = ::java::awt::Choice;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $FileDialog = ::java::awt::FileDialog;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyEventDispatcher = ::java::awt::KeyEventDispatcher;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Label = ::java::awt::Label;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $1List = ::java::awt::List;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $TextComponent = ::java::awt::TextComponent;
using $TextField = ::java::awt::TextField;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$FileDialogAccessor = ::sun::awt::AWTAccessor$FileDialogAccessor;
using $FileDialogFilter = ::sun::awt::X11::FileDialogFilter;
using $ListHelper = ::sun::awt::X11::ListHelper;
using $Separator = ::sun::awt::X11::Separator;
using $XChoicePeer = ::sun::awt::X11::XChoicePeer;
using $XChoicePeerListener = ::sun::awt::X11::XChoicePeerListener;
using $XDialogPeer = ::sun::awt::X11::XDialogPeer;
using $XFileDialogPeer$1 = ::sun::awt::X11::XFileDialogPeer$1;
using $XFileDialogPeer$2 = ::sun::awt::X11::XFileDialogPeer$2;
using $XFileDialogPeer$3 = ::sun::awt::X11::XFileDialogPeer$3;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFileDialogPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XFileDialogPeer, log)},
	{"target", "Ljava/awt/FileDialog;", nullptr, 0, $field(XFileDialogPeer, target)},
	{"file", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, file)},
	{"dir", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, dir)},
	{"title", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, title)},
	{"mode", "I", nullptr, 0, $field(XFileDialogPeer, mode)},
	{"filter", "Ljava/io/FilenameFilter;", nullptr, 0, $field(XFileDialogPeer, filter)},
	{"PATH_CHOICE_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XFileDialogPeer, PATH_CHOICE_WIDTH)},
	{"savedFile", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, savedFile)},
	{"savedDir", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, savedDir)},
	{"userDir", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, userDir)},
	{"fileDialog", "Ljava/awt/Dialog;", nullptr, 0, $field(XFileDialogPeer, fileDialog)},
	{"gbl", "Ljava/awt/GridBagLayout;", nullptr, 0, $field(XFileDialogPeer, gbl)},
	{"gblButtons", "Ljava/awt/GridBagLayout;", nullptr, 0, $field(XFileDialogPeer, gblButtons)},
	{"gbc", "Ljava/awt/GridBagConstraints;", nullptr, 0, $field(XFileDialogPeer, gbc)},
	{"filterField", "Ljava/awt/TextField;", nullptr, 0, $field(XFileDialogPeer, filterField)},
	{"selectionField", "Ljava/awt/TextField;", nullptr, 0, $field(XFileDialogPeer, selectionField)},
	{"directoryList", "Ljava/awt/List;", nullptr, 0, $field(XFileDialogPeer, directoryList)},
	{"fileList", "Ljava/awt/List;", nullptr, 0, $field(XFileDialogPeer, fileList)},
	{"buttons", "Ljava/awt/Panel;", nullptr, 0, $field(XFileDialogPeer, buttons)},
	{"openButton", "Ljava/awt/Button;", nullptr, 0, $field(XFileDialogPeer, openButton)},
	{"filterButton", "Ljava/awt/Button;", nullptr, 0, $field(XFileDialogPeer, filterButton)},
	{"cancelButton", "Ljava/awt/Button;", nullptr, 0, $field(XFileDialogPeer, cancelButton)},
	{"pathChoice", "Ljava/awt/Choice;", nullptr, 0, $field(XFileDialogPeer, pathChoice)},
	{"pathField", "Ljava/awt/TextField;", nullptr, 0, $field(XFileDialogPeer, pathField)},
	{"pathPanel", "Ljava/awt/Panel;", nullptr, 0, $field(XFileDialogPeer, pathPanel)},
	{"cancelButtonText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, cancelButtonText)},
	{"enterFileNameLabelText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, enterFileNameLabelText)},
	{"filesLabelText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, filesLabelText)},
	{"foldersLabelText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, foldersLabelText)},
	{"pathLabelText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, pathLabelText)},
	{"filterLabelText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, filterLabelText)},
	{"openButtonText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, openButtonText)},
	{"saveButtonText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, saveButtonText)},
	{"actionButtonText", "Ljava/lang/String;", nullptr, 0, $field(XFileDialogPeer, actionButtonText)},
	{}
};

$MethodInfo _XFileDialogPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*beginValidate", "()V", nullptr, $PUBLIC},
	{"*blockWindows", "(Ljava/util/List;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/FileDialog;)V", nullptr, 0, $method(static_cast<void(XFileDialogPeer::*)($FileDialog*)>(&XFileDialogPeer::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addComponent", "(Ljava/awt/Component;Ljava/awt/GridBagLayout;Ljava/awt/GridBagConstraints;IIIILjava/awt/Container;IIILjava/awt/Insets;)V", nullptr, 0},
	{"addItemsToPathChoice", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"dispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDirList", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, 0},
	{"getFileName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getParentDirectory", "()Ljava/lang/String;", nullptr, 0},
	{"handleCancel", "()V", nullptr, 0},
	{"handleFilter", "(Ljava/lang/String;)V", nullptr, 0},
	{"handleQuitButton", "()V", nullptr, 0},
	{"handleSelection", "(Ljava/lang/String;)V", nullptr, 0},
	{"init", "(Ljava/awt/FileDialog;)V", nullptr, $PRIVATE, $method(static_cast<void(XFileDialogPeer::*)($FileDialog*)>(&XFileDialogPeer::init))},
	{"installStrings", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFile", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFilenameFilter", "(Ljava/io/FilenameFilter;)V", nullptr, $PUBLIC},
	{"setFilterEntry", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"setFilterField", "(Ljava/lang/String;)V", nullptr, 0},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"*setOpacity", "(F)V", nullptr, $PUBLIC},
	{"*setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"*setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setSelectionField", "(Ljava/lang/String;)V", nullptr, 0},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*toBack", "()V", nullptr, $PUBLIC},
	{"*toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unfurledChoiceClosing", "()V", nullptr, $PUBLIC},
	{"unfurledChoiceOpening", "(Lsun/awt/X11/ListHelper;)V", nullptr, $PUBLIC},
	{"*updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateDirectoryByUserAction", "(Ljava/lang/String;)Z", nullptr, 0},
	{"*updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XFileDialogPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XFileDialogPeer$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XFileDialogPeer$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XFileDialogPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XFileDialogPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XFileDialogPeer",
	"sun.awt.X11.XDialogPeer",
	"java.awt.peer.FileDialogPeer,java.awt.event.ActionListener,java.awt.event.ItemListener,java.awt.KeyEventDispatcher,sun.awt.X11.XChoicePeerListener",
	_XFileDialogPeer_FieldInfo_,
	_XFileDialogPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XFileDialogPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XFileDialogPeer$3,sun.awt.X11.XFileDialogPeer$2,sun.awt.X11.XFileDialogPeer$1"
};

$Object* allocate$XFileDialogPeer($Class* clazz) {
	return $of($alloc(XFileDialogPeer));
}

void XFileDialogPeer::blockWindows($List* toBlock) {
	this->$XDialogPeer::blockWindows(toBlock);
}

$Graphics* XFileDialogPeer::getGraphics() {
	 return this->$XDialogPeer::getGraphics();
}

void XFileDialogPeer::setTitle($String* title) {
	this->$XDialogPeer::setTitle(title);
}

$Insets* XFileDialogPeer::getInsets() {
	 return this->$XDialogPeer::getInsets();
}

void XFileDialogPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XDialogPeer::setBounds(x, y, width, height, op);
}

void XFileDialogPeer::setResizable(bool resizable) {
	this->$XDialogPeer::setResizable(resizable);
}

$Point* XFileDialogPeer::getLocationOnScreen() {
	 return this->$XDialogPeer::getLocationOnScreen();
}

void XFileDialogPeer::toFront() {
	this->$XDialogPeer::toFront();
}

void XFileDialogPeer::toBack() {
	this->$XDialogPeer::toBack();
}

void XFileDialogPeer::updateAlwaysOnTopState() {
	this->$XDialogPeer::updateAlwaysOnTopState();
}

void XFileDialogPeer::repositionSecurityWarning() {
	this->$XDialogPeer::repositionSecurityWarning();
}

void XFileDialogPeer::setModalBlocked($Dialog* d, bool blocked) {
	this->$XDialogPeer::setModalBlocked(d, blocked);
}

void XFileDialogPeer::updateFocusableWindowState() {
	this->$XDialogPeer::updateFocusableWindowState();
}

void XFileDialogPeer::print($Graphics* g) {
	this->$XDialogPeer::print(g);
}

void XFileDialogPeer::setOpacity(float opacity) {
	this->$XDialogPeer::setOpacity(opacity);
}

void XFileDialogPeer::setOpaque(bool isOpaque) {
	this->$XDialogPeer::setOpaque(isOpaque);
}

void XFileDialogPeer::updateWindow() {
	this->$XDialogPeer::updateWindow();
}

void XFileDialogPeer::paint($Graphics* g) {
	this->$XDialogPeer::paint(g);
}

void XFileDialogPeer::setBackground($Color* c) {
	this->$XDialogPeer::setBackground(c);
}

void XFileDialogPeer::setForeground($Color* c) {
	this->$XDialogPeer::setForeground(c);
}

void XFileDialogPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XDialogPeer::reparent(newNativeParent);
}

bool XFileDialogPeer::isReparentSupported() {
	 return this->$XDialogPeer::isReparentSupported();
}

bool XFileDialogPeer::isObscured() {
	 return this->$XDialogPeer::isObscured();
}

bool XFileDialogPeer::canDetermineObscurity() {
	 return this->$XDialogPeer::canDetermineObscurity();
}

bool XFileDialogPeer::isFocusable() {
	 return this->$XDialogPeer::isFocusable();
}

bool XFileDialogPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XDialogPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XFileDialogPeer::setEnabled(bool value) {
	this->$XDialogPeer::setEnabled(value);
}

void XFileDialogPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XDialogPeer::coalescePaintEvent(e);
}

void XFileDialogPeer::handleEvent($AWTEvent* e) {
	this->$XDialogPeer::handleEvent(e);
}

$Dimension* XFileDialogPeer::getMinimumSize() {
	 return this->$XDialogPeer::getMinimumSize();
}

$Dimension* XFileDialogPeer::getPreferredSize() {
	 return this->$XDialogPeer::getPreferredSize();
}

void XFileDialogPeer::layout() {
	this->$XDialogPeer::layout();
}

$FontMetrics* XFileDialogPeer::getFontMetrics($Font* font) {
	 return this->$XDialogPeer::getFontMetrics(font);
}

void XFileDialogPeer::setFont($Font* f) {
	this->$XDialogPeer::setFont(f);
}

void XFileDialogPeer::updateCursorImmediately() {
	this->$XDialogPeer::updateCursorImmediately();
}

$Image* XFileDialogPeer::createImage(int32_t width, int32_t height) {
	 return this->$XDialogPeer::createImage(width, height);
}

$VolatileImage* XFileDialogPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XDialogPeer::createVolatileImage(width, height);
}

void XFileDialogPeer::beginValidate() {
	this->$XDialogPeer::beginValidate();
}

void XFileDialogPeer::endValidate() {
	this->$XDialogPeer::endValidate();
}

bool XFileDialogPeer::handlesWheelScrolling() {
	 return this->$XDialogPeer::handlesWheelScrolling();
}

void XFileDialogPeer::beginLayout() {
	this->$XDialogPeer::beginLayout();
}

void XFileDialogPeer::endLayout() {
	this->$XDialogPeer::endLayout();
}

void XFileDialogPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XDialogPeer::createBuffers(numBuffers, caps);
}

void XFileDialogPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XDialogPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XFileDialogPeer::getBackBuffer() {
	 return this->$XDialogPeer::getBackBuffer();
}

void XFileDialogPeer::destroyBuffers() {
	this->$XDialogPeer::destroyBuffers();
}

void XFileDialogPeer::setZOrder($ComponentPeer* above) {
	this->$XDialogPeer::setZOrder(above);
}

void XFileDialogPeer::applyShape($Region* shape) {
	this->$XDialogPeer::applyShape(shape);
}

bool XFileDialogPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XDialogPeer::updateGraphicsData(gc);
}

$ColorModel* XFileDialogPeer::getColorModel() {
	 return this->$XDialogPeer::getColorModel();
}

$GraphicsConfiguration* XFileDialogPeer::getGraphicsConfiguration() {
	 return this->$XDialogPeer::getGraphicsConfiguration();
}

$String* XFileDialogPeer::toString() {
	 return this->$XDialogPeer::toString();
}

int32_t XFileDialogPeer::hashCode() {
	 return this->$XDialogPeer::hashCode();
}

bool XFileDialogPeer::equals(Object$* arg0) {
	 return this->$XDialogPeer::equals(arg0);
}

$Object* XFileDialogPeer::clone() {
	 return this->$XDialogPeer::clone();
}

void XFileDialogPeer::finalize() {
	this->$XDialogPeer::finalize();
}

$PlatformLogger* XFileDialogPeer::log = nullptr;

void XFileDialogPeer::installStrings() {
	$useLocalCurrentObjectStackCache();
	$var($Locale, l, $nc(this->target)->getLocale());
	$var($UIDefaults, uid, $XToolkit::getUIDefaults());
	$set(this, cancelButtonText, $nc(uid)->getString("FileChooser.cancelButtonText"_s, l));
	$set(this, enterFileNameLabelText, uid->getString("FileChooser.enterFileNameLabelText"_s, l));
	$set(this, filesLabelText, uid->getString("FileChooser.filesLabelText"_s, l));
	$set(this, foldersLabelText, uid->getString("FileChooser.foldersLabelText"_s, l));
	$set(this, pathLabelText, uid->getString("FileChooser.pathLabelText"_s, l));
	$set(this, filterLabelText, uid->getString("FileChooser.filterLabelText"_s, l));
	$set(this, openButtonText, uid->getString("FileChooser.openButtonText"_s, l));
	$set(this, saveButtonText, uid->getString("FileChooser.saveButtonText"_s, l));
}

void XFileDialogPeer::init$($FileDialog* target) {
	$XDialogPeer::init$(static_cast<$Dialog*>(target));
	$set(this, cancelButtonText, nullptr);
	$set(this, enterFileNameLabelText, nullptr);
	$set(this, filesLabelText, nullptr);
	$set(this, foldersLabelText, nullptr);
	$set(this, pathLabelText, nullptr);
	$set(this, filterLabelText, nullptr);
	$set(this, openButtonText, nullptr);
	$set(this, saveButtonText, nullptr);
	$set(this, actionButtonText, nullptr);
	$set(this, target, target);
}

void XFileDialogPeer::init($FileDialog* target) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, fileDialog, target);
	$set(this, title, $nc(target)->getTitle());
	this->mode = target->getMode();
	$set(this, target, target);
	$set(this, filter, target->getFilenameFilter());
	$set(this, savedFile, target->getFile());
	$set(this, savedDir, target->getDirectory());
	$set(this, userDir, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XFileDialogPeer$1, this)))));
	installStrings();
	$set(this, gbl, $new($GridBagLayout));
	$set(this, gblButtons, $new($GridBagLayout));
	$set(this, gbc, $new($GridBagConstraints));
	$nc(this->fileDialog)->setLayout(this->gbl);
	$set(this, buttons, $new($Panel));
	$nc(this->buttons)->setLayout(this->gblButtons);
	$set(this, actionButtonText, (target->getMode() == $FileDialog::SAVE) ? this->saveButtonText : this->openButtonText);
	$set(this, openButton, $new($Button, this->actionButtonText));
	$set(this, filterButton, $new($Button, this->filterLabelText));
	$set(this, cancelButton, $new($Button, this->cancelButtonText));
	$set(this, directoryList, $new($1List));
	$set(this, fileList, $new($1List));
	$set(this, filterField, $new($TextField));
	$set(this, selectionField, $new($TextField));
	bool isMultipleMode = $nc($($AWTAccessor::getFileDialogAccessor()))->isMultipleMode(target);
	$nc(this->fileList)->setMultipleMode(isMultipleMode);
	$var($Insets, noInset, $new($Insets, 0, 0, 0, 0));
	$var($Insets, textFieldInset, $new($Insets, 0, 8, 0, 8));
	$var($Insets, leftListInset, $new($Insets, 0, 8, 0, 4));
	$var($Insets, rightListInset, $new($Insets, 0, 4, 0, 8));
	$var($Insets, separatorInset, $new($Insets, 8, 0, 0, 0));
	$var($Insets, labelInset, $new($Insets, 0, 8, 0, 0));
	$var($Insets, buttonsInset, $new($Insets, 10, 8, 10, 8));
	$init($Font);
	$var($Font, f, $new($Font, $Font::DIALOG, $Font::PLAIN, 12));
	$var($Label, label, $new($Label, this->pathLabelText));
	label->setFont(f);
	addComponent(label, this->gbl, this->gbc, 0, 0, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::NONE, labelInset);
	$set(this, pathField, $new($TextField, this->savedDir != nullptr ? this->savedDir : this->userDir));
	$var($Choice, tmp, $new($XFileDialogPeer$2, this));
	$set(this, pathChoice, tmp);
	$set(this, pathPanel, $new($Panel));
	$nc(this->pathPanel)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(this->pathPanel)->add(static_cast<$Component*>(this->pathField), $of($BorderLayout::CENTER));
	$nc(this->pathPanel)->add(static_cast<$Component*>(this->pathChoice), $of($BorderLayout::EAST));
	addComponent(this->pathPanel, this->gbl, this->gbc, 0, 1, 2, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::HORIZONTAL, textFieldInset);
	$assign(label, $new($Label, this->filterLabelText));
	label->setFont(f);
	addComponent(label, this->gbl, this->gbc, 0, 2, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::NONE, labelInset);
	addComponent(this->filterField, this->gbl, this->gbc, 0, 3, 2, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::HORIZONTAL, textFieldInset);
	$assign(label, $new($Label, this->foldersLabelText));
	label->setFont(f);
	addComponent(label, this->gbl, this->gbc, 0, 4, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::NONE, labelInset);
	$assign(label, $new($Label, this->filesLabelText));
	label->setFont(f);
	addComponent(label, this->gbl, this->gbc, 1, 4, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::NONE, labelInset);
	addComponent(this->directoryList, this->gbl, this->gbc, 0, 5, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 1, $GridBagConstraints::BOTH, leftListInset);
	addComponent(this->fileList, this->gbl, this->gbc, 1, 5, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 1, $GridBagConstraints::BOTH, rightListInset);
	$assign(label, $new($Label, this->enterFileNameLabelText));
	label->setFont(f);
	addComponent(label, this->gbl, this->gbc, 0, 6, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::NONE, labelInset);
	addComponent(this->selectionField, this->gbl, this->gbc, 0, 7, 2, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::HORIZONTAL, textFieldInset);
	addComponent($$new($Separator, $nc($($nc(this->fileDialog)->size()))->width, 2, $Separator::HORIZONTAL), this->gbl, this->gbc, 0, 8, 15, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::HORIZONTAL, separatorInset);
	addComponent(this->openButton, this->gblButtons, this->gbc, 0, 0, 1, $GridBagConstraints::WEST, static_cast<$Container*>(this->buttons), 1, 0, $GridBagConstraints::NONE, noInset);
	addComponent(this->filterButton, this->gblButtons, this->gbc, 1, 0, 1, $GridBagConstraints::CENTER, static_cast<$Container*>(this->buttons), 1, 0, $GridBagConstraints::NONE, noInset);
	addComponent(this->cancelButton, this->gblButtons, this->gbc, 2, 0, 1, $GridBagConstraints::EAST, static_cast<$Container*>(this->buttons), 1, 0, $GridBagConstraints::NONE, noInset);
	addComponent(this->buttons, this->gbl, this->gbc, 0, 9, 2, $GridBagConstraints::WEST, static_cast<$Container*>(this->fileDialog), 1, 0, $GridBagConstraints::HORIZONTAL, buttonsInset);
	$nc(this->fileDialog)->setSize(400, 400);
	$var($XChoicePeer, choicePeer, $cast($XChoicePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->pathChoice)));
	$nc(choicePeer)->setDrawSelectedItem(false);
	choicePeer->setAlignUnder(this->pathField);
	$nc(this->filterField)->addActionListener(this);
	$nc(this->selectionField)->addActionListener(this);
	$nc(this->directoryList)->addActionListener(this);
	$nc(this->directoryList)->addItemListener(this);
	$nc(this->fileList)->addItemListener(this);
	$nc(this->fileList)->addActionListener(this);
	$nc(this->openButton)->addActionListener(this);
	$nc(this->filterButton)->addActionListener(this);
	$nc(this->cancelButton)->addActionListener(this);
	$nc(this->pathChoice)->addItemListener(this);
	$nc(this->pathField)->addActionListener(this);
	target->addWindowListener($$new($XFileDialogPeer$3, this));
	$nc(this->pathChoice)->addItemListener(this);
}

void XFileDialogPeer::updateMinimumSize() {
}

void XFileDialogPeer::updateIconImages() {
	if ($nc(this->winAttr)->icons == nullptr) {
		$nc(this->winAttr)->iconsInherited = false;
		$set($nc(this->winAttr), icons, getDefaultIconInfo());
		setIconHints($nc(this->winAttr)->icons);
	}
}

void XFileDialogPeer::addComponent($Component* comp, $GridBagLayout* gb, $GridBagConstraints* c, int32_t gridx, int32_t gridy, int32_t gridwidth, int32_t anchor, $Container* cont, int32_t weightx, int32_t weighty, int32_t fill, $Insets* in) {
	$nc(c)->gridx = gridx;
	c->gridy = gridy;
	c->gridwidth = gridwidth;
	c->anchor = anchor;
	c->weightx = (double)weightx;
	c->weighty = (double)weighty;
	c->fill = fill;
	$set(c, insets, in);
	$nc(gb)->setConstraints(comp, c);
	$nc(cont)->add(comp);
}

$String* XFileDialogPeer::getFileName($String* str) {
	if (str == nullptr) {
		return ""_s;
	}
	int32_t index = $nc(str)->lastIndexOf((int32_t)u'/');
	if (index == -1) {
		return str;
	} else {
		return str->substring(index + 1);
	}
}

void XFileDialogPeer::handleFilter($String* f) {
	if (f == nullptr) {
		return;
	}
	setFilterEntry(this->dir, f);
	$nc(this->directoryList)->select(0);
	if ($nc(this->fileList)->getItemCount() != 0) {
		$nc(this->fileList)->requestFocus();
	} else {
		$nc(this->directoryList)->requestFocus();
	}
}

void XFileDialogPeer::handleSelection($String* file) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	int32_t index = $nc(file)->lastIndexOf((int32_t)$File::separatorChar);
	if (index == -1) {
		$set(this, savedDir, this->dir);
		$set(this, savedFile, file);
	} else {
		$set(this, savedDir, file->substring(0, index + 1));
		$set(this, savedFile, file->substring(index + 1));
	}
	$var($StringArray, fileNames, $nc(this->fileList)->getSelectedItems());
	int32_t filesNumber = (fileNames != nullptr) ? $nc(fileNames)->length : 0;
	$var($FileArray, files, $new($FileArray, filesNumber));
	for (int32_t i = 0; i < filesNumber; ++i) {
		files->set(i, $$new($File, this->savedDir, fileNames->get(i)));
	}
	$var($AWTAccessor$FileDialogAccessor, fileDialogAccessor, $AWTAccessor::getFileDialogAccessor());
	$nc(fileDialogAccessor)->setDirectory(this->target, this->savedDir);
	fileDialogAccessor->setFile(this->target, this->savedFile);
	fileDialogAccessor->setFiles(this->target, files);
}

void XFileDialogPeer::handleCancel() {
	$useLocalCurrentObjectStackCache();
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->removeKeyEventDispatcher(this);
	setSelectionField(nullptr);
	setFilterField(nullptr);
	$nc(this->directoryList)->clear();
	$nc(this->fileList)->clear();
	$var($AWTAccessor$FileDialogAccessor, fileDialogAccessor, $AWTAccessor::getFileDialogAccessor());
	$nc(fileDialogAccessor)->setDirectory(this->target, nullptr);
	fileDialogAccessor->setFile(this->target, nullptr);
	fileDialogAccessor->setFiles(this->target, nullptr);
	handleQuitButton();
}

void XFileDialogPeer::handleQuitButton() {
	$set(this, dir, nullptr);
	$set(this, file, nullptr);
	$nc(this->target)->hide();
}

void XFileDialogPeer::setFilterEntry($String* d, $String* f$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, f, f$renamed);
	$var($File, fe, $new($File, d));
	bool var$0 = fe->isDirectory();
	if (var$0 && fe->canRead()) {
		setSelectionField($($nc(this->target)->getFile()));
		if ($nc(f)->isEmpty()) {
			$assign(f, "*"_s);
			setFilterField(f);
		} else {
			setFilterField(f);
		}
		$var($StringArray, l, nullptr);
		if ($nc(f)->equals("*"_s)) {
			$assign(l, fe->list());
		} else {
			$var($FileDialogFilter, ff, $new($FileDialogFilter, f));
			$assign(l, fe->list(ff));
		}
		if (l == nullptr) {
			$set(this, dir, getParentDirectory());
			return;
		}
		$nc(this->directoryList)->clear();
		$nc(this->fileList)->clear();
		$nc(this->directoryList)->setVisible(false);
		$nc(this->fileList)->setVisible(false);
		$nc(this->directoryList)->addItem(".."_s);
		$Arrays::sort(l);
		for (int32_t i = 0; i < $nc(l)->length; ++i) {
			$var($File, file, $new($File, $$str({d, l->get(i)})));
			if (file->isDirectory()) {
				$nc(this->directoryList)->addItem($$str({l->get(i), "/"_s}));
			} else if (this->filter != nullptr) {
				if ($nc(this->filter)->accept($$new($File, l->get(i)), l->get(i))) {
					$nc(this->fileList)->addItem(l->get(i));
				}
			} else {
				$nc(this->fileList)->addItem(l->get(i));
			}
		}
		$set(this, dir, d);
		$nc(this->pathField)->setText(this->dir);
		$nc(this->target)->setDirectory(this->dir);
		$nc(this->directoryList)->setVisible(true);
		$nc(this->fileList)->setVisible(true);
	}
}

$StringArray* XFileDialogPeer::getDirList($String* dir$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, dir, dir$renamed);
	if (!$nc(dir)->endsWith("/"_s)) {
		$assign(dir, $str({dir, "/"_s}));
	}
	$var($chars, charr, $nc(dir)->toCharArray());
	int32_t numSlashes = 0;
	for (int32_t i = 0; i < charr->length; ++i) {
		if (charr->get(i) == u'/') {
			++numSlashes;
		}
	}
	$var($StringArray, starr, $new($StringArray, numSlashes));
	int32_t j = 0;
	for (int32_t i = charr->length - 1; i >= 0; --i) {
		if (charr->get(i) == u'/') {
			starr->set(j++, $$new($String, charr, 0, i + 1));
		}
	}
	return starr;
}

void XFileDialogPeer::setSelectionField($String* str) {
	$nc(this->selectionField)->setText(str);
}

void XFileDialogPeer::setFilterField($String* str) {
	$nc(this->filterField)->setText(str);
}

void XFileDialogPeer::itemStateChanged($ItemEvent* itemEvent) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(itemEvent)->getID() != $ItemEvent::ITEM_STATE_CHANGED;
	if (var$0 || $nc(itemEvent)->getStateChange() == $ItemEvent::DESELECTED) {
		return;
	}
	$var($Object, source, $nc(itemEvent)->getSource());
	if ($equals(source, this->pathChoice)) {
		$var($String, dir, $nc(this->pathChoice)->getSelectedItem());
		$nc(this->pathField)->setText(dir);
	} else if ($equals(this->directoryList, source)) {
		setFilterField($(getFileName($($nc(this->filterField)->getText()))));
	} else if ($equals(this->fileList, source)) {
		$var($String, file, $nc(this->fileList)->getItem($nc(($cast($Integer, $(itemEvent->getItem()))))->intValue()));
		setSelectionField(file);
	}
}

bool XFileDialogPeer::updateDirectoryByUserAction($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($String, dir, nullptr);
	if ($nc(str)->equals(".."_s)) {
		$assign(dir, getParentDirectory());
	} else {
		$assign(dir, $str({this->dir, str}));
	}
	$var($File, fe, $new($File, dir));
	if (fe->canRead()) {
		$set(this, dir, dir);
		return true;
	} else {
		return false;
	}
}

$String* XFileDialogPeer::getParentDirectory() {
	$var($String, parent, this->dir);
	if (!$nc(this->dir)->equals("/"_s)) {
		if ($nc(this->dir)->endsWith("/"_s)) {
			$assign(parent, $nc(parent)->substring(0, parent->lastIndexOf("/"_s)));
		}
		$assign(parent, $nc(parent)->substring(0, parent->lastIndexOf("/"_s) + 1));
	}
	return parent;
}

void XFileDialogPeer::actionPerformed($ActionEvent* actionEvent) {
	$useLocalCurrentObjectStackCache();
	$var($String, actionCommand, $nc(actionEvent)->getActionCommand());
	$var($Object, source, actionEvent->getSource());
	if ($nc(actionCommand)->equals(this->actionButtonText)) {
		handleSelection($($nc(this->selectionField)->getText()));
		handleQuitButton();
	} else if (actionCommand->equals(this->filterLabelText)) {
		handleFilter($($nc(this->filterField)->getText()));
	} else if (actionCommand->equals(this->cancelButtonText)) {
		handleCancel();
	} else if ($instanceOf($TextField, source)) {
		if (this->selectionField == ($cast($TextField, source))) {
			handleSelection($($nc(this->selectionField)->getText()));
			handleQuitButton();
		} else if (this->filterField == ($cast($TextField, source))) {
			handleFilter($($nc(this->filterField)->getText()));
		} else if (this->pathField == ($cast($TextField, source))) {
			$nc(this->target)->setDirectory($($nc(this->pathField)->getText()));
		}
	} else if ($instanceOf($1List, source)) {
		if (this->directoryList == ($cast($1List, source))) {
			if (updateDirectoryByUserAction(actionCommand)) {
				handleFilter($(getFileName($($nc(this->filterField)->getText()))));
			}
		} else if (this->fileList == ($cast($1List, source))) {
			handleSelection(actionCommand);
			handleQuitButton();
		}
	}
}

bool XFileDialogPeer::dispatchKeyEvent($KeyEvent* keyEvent) {
	$useLocalCurrentObjectStackCache();
	int32_t id = $nc(keyEvent)->getID();
	int32_t keyCode = keyEvent->getKeyCode();
	if (id == $KeyEvent::KEY_PRESSED && keyCode == $KeyEvent::VK_ESCAPE) {
		$synchronized($nc(this->target)->getTreeLock()) {
			$var($Component, comp, $cast($Component, keyEvent->getSource()));
			while (comp != nullptr) {
				$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
				if ($equals(comp, this->pathChoice)) {
					$var($XChoicePeer, choicePeer, $cast($XChoicePeer, $nc(acc)->getPeer(this->pathChoice)));
					if ($nc(choicePeer)->isUnfurled()) {
						return false;
					}
				}
				$var($Object, peer, $nc(acc)->getPeer(comp));
				if ($equals(peer, this)) {
					handleCancel();
					return true;
				}
				$assign(comp, comp->getParent());
			}
		}
	}
	return false;
}

void XFileDialogPeer::setFile($String* file) {
	$useLocalCurrentObjectStackCache();
	if (file == nullptr) {
		$set(this, file, nullptr);
		return;
	}
	if (this->dir == nullptr) {
		$var($String, d, "./"_s);
		$var($File, f, $new($File, d, file));
		if (f->isFile()) {
			$set(this, file, file);
			setDirectory(d);
		}
	} else {
		$var($File, f, $new($File, this->dir, file));
		if (f->isFile()) {
			$set(this, file, file);
		}
	}
	setSelectionField(file);
}

void XFileDialogPeer::setDirectory($String* dir$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, dir, dir$renamed);
	if (dir == nullptr) {
		$set(this, dir, nullptr);
		return;
	}
	if ($nc(dir)->equals(this->dir)) {
		return;
	}
	int32_t i = 0;
	if ((i = $nc(dir)->indexOf("~"_s)) != -1) {
		$var($String, var$1, $(dir->substring(0, i)));
		$var($String, var$0, $$concat(var$1, $($System::getProperty("user.home"_s))));
		$assign(dir, $concat(var$0, $(dir->substring(i + 1, dir->length()))));
	}
	$var($File, fe, $$new($File, dir)->getAbsoluteFile());
	$init($PlatformLogger$Level);
	if ($nc(XFileDialogPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XFileDialogPeer::log)->fine($$str({"Current directory : "_s, fe}));
	}
	if (!$nc(fe)->isDirectory()) {
		$assign(dir, "./"_s);
		$assign(fe, $$new($File, dir)->getAbsoluteFile());
		if (!$nc(fe)->isDirectory()) {
			return;
		}
	}
	try {
		$assign(dir, ($set(this, dir, $nc(fe)->getCanonicalPath())));
	} catch ($IOException& ie) {
		$assign(dir, ($set(this, dir, $nc(fe)->getAbsolutePath())));
	}
	$nc(this->pathField)->setText(this->dir);
	if ($nc(dir)->endsWith("/"_s)) {
		$set(this, dir, dir);
		handleFilter(""_s);
	} else {
		$set(this, dir, $str({dir, "/"_s}));
		handleFilter(""_s);
	}
}

void XFileDialogPeer::setFilenameFilter($FilenameFilter* filter) {
	$set(this, filter, filter);
}

void XFileDialogPeer::dispose() {
	$var($FileDialog, fd, $cast($FileDialog, this->fileDialog));
	if (fd != nullptr) {
		fd->removeAll();
	}
	$XDialogPeer::dispose();
}

void XFileDialogPeer::setVisible(bool b) {
	$useLocalCurrentObjectStackCache();
	if (this->fileDialog == nullptr) {
		init(this->target);
	}
	if (this->savedDir != nullptr || this->userDir != nullptr) {
		setDirectory(this->savedDir != nullptr ? this->savedDir : this->userDir);
	}
	if (this->savedFile != nullptr) {
		setFile(this->savedFile);
	}
	$XDialogPeer::setVisible(b);
	$var($XChoicePeer, choicePeer, $cast($XChoicePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->pathChoice)));
	if (b == true) {
		$nc(choicePeer)->addXChoicePeerListener(this);
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addKeyEventDispatcher(this);
	} else {
		$nc(choicePeer)->removeXChoicePeerListener();
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->removeKeyEventDispatcher(this);
	}
	$nc(this->selectionField)->requestFocusInWindow();
}

void XFileDialogPeer::addItemsToPathChoice($String* text) {
	$var($StringArray, dirList, getDirList(text));
	for (int32_t i = 0; i < $nc(dirList)->length; ++i) {
		$nc(this->pathChoice)->addItem(dirList->get(i));
	}
}

void XFileDialogPeer::unfurledChoiceOpening($ListHelper* choiceHelper) {
	$useLocalCurrentObjectStackCache();
	if ($nc(choiceHelper)->getItemCount() == 0) {
		addItemsToPathChoice($($nc(this->pathField)->getText()));
		return;
	}
	if ($nc($($nc(this->pathChoice)->getItem(0)))->equals($($nc(this->pathField)->getText()))) {
		return;
	}
	$nc(this->pathChoice)->removeAll();
	addItemsToPathChoice($($nc(this->pathField)->getText()));
}

void XFileDialogPeer::unfurledChoiceClosing() {
	$var($String, dir, $nc(this->pathChoice)->getSelectedItem());
	$nc(this->target)->setDirectory(dir);
}

void clinit$XFileDialogPeer($Class* class$) {
	$assignStatic(XFileDialogPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XFileDialogPeer"_s));
}

XFileDialogPeer::XFileDialogPeer() {
}

$Class* XFileDialogPeer::load$($String* name, bool initialize) {
	$loadClass(XFileDialogPeer, name, initialize, &_XFileDialogPeer_ClassInfo_, clinit$XFileDialogPeer, allocate$XFileDialogPeer);
	return class$;
}

$Class* XFileDialogPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun