#include <sun/swing/SwingUtilities2.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/PrintGraphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/LineBreakMeasurer.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/print/PrinterGraphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>
#include <javax/swing/text/Highlighter$Highlight.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/font/FontUtilities.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/print/ProxyPrintGraphics.h>
#include <sun/swing/ImageIconUIResource.h>
#include <sun/swing/PrintColorUIResource.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <sun/swing/SwingUtilities2$KeyPair.h>
#include <sun/swing/SwingUtilities2$LSBCacheEntry.h>
#include <sun/swing/SwingUtilities2$Section.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_MASK
#undef APP_CONTEXT_FRC_CACHE_KEY
#undef BASICMENUITEMUI_MAX_TEXT_OFFSET
#undef CACHE_SIZE
#undef CHAR_BUFFER_SIZE
#undef CTRL_MASK
#undef DEFAULT_FRC
#undef DESKTOPFONTHINTS
#undef DONE
#undef FONT
#undef IMPLIED_CR
#undef KEY_ANTIALIASING
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef LAF_STATE_KEY
#undef LEADING
#undef MAX_CHAR_INDEX
#undef MENU_SELECTION_MANAGER_LISTENER_KEY
#undef MIDDLE
#undef MIN_CHAR_INDEX
#undef NUMERIC_SHAPING
#undef SHIFT_MASK
#undef SKIP_CLICK_COUNT
#undef TRAILING
#undef TRUE
#undef VALUE_ANTIALIAS_ON
#undef VALUE_FRACTIONALMETRICS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef VK_C
#undef VK_COPY
#undef VK_CUT
#undef VK_DELETE
#undef VK_INSERT
#undef VK_PASTE
#undef VK_V
#undef VK_X

using $SwingUtilities2$LSBCacheEntryArray = $Array<::sun::swing::SwingUtilities2$LSBCacheEntry>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTPermission = ::java::awt::AWTPermission;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $PrintGraphics = ::java::awt::PrintGraphics;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $LineBreakMeasurer = ::java::awt::font::LineBreakMeasurer;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PrinterGraphics = ::java::awt::print::PrinterGraphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $StringBuffer = ::java::lang::StringBuffer;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Modifier = ::java::lang::reflect::Modifier;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Callable = ::java::util::concurrent::Callable;
using $Future = ::java::util::concurrent::Future;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $DefaultHighlighter$DefaultHighlightPainter = ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter;
using $Highlighter$Highlight = ::javax::swing::text::Highlighter$Highlight;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$InputEventAccessor = ::sun::awt::AWTAccessor$InputEventAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $FontUtilities = ::sun::font::FontUtilities;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $ProxyPrintGraphics = ::sun::print::ProxyPrintGraphics;
using $ImageIconUIResource = ::sun::swing::ImageIconUIResource;
using $PrintColorUIResource = ::sun::swing::PrintColorUIResource;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;
using $SwingUtilities2$KeyPair = ::sun::swing::SwingUtilities2$KeyPair;
using $SwingUtilities2$LSBCacheEntry = ::sun::swing::SwingUtilities2$LSBCacheEntry;
using $SwingUtilities2$Section = ::sun::swing::SwingUtilities2$Section;

namespace sun {
	namespace swing {

class SwingUtilities2$$Lambda$lambda$makeIcon$1 : public $UIDefaults$LazyValue {
	$class(SwingUtilities2$$Lambda$lambda$makeIcon$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(bool enablePrivileges, $Class* baseClass, $Class* rootClass, $String* imageFile) {
		this->enablePrivileges = enablePrivileges;
		this->baseClass = baseClass;
		this->rootClass = rootClass;
		$set(this, imageFile, imageFile);
	}
	virtual $Object* createValue($UIDefaults* table) override {
		 return SwingUtilities2::lambda$makeIcon$1(enablePrivileges, baseClass, rootClass, imageFile, table);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SwingUtilities2$$Lambda$lambda$makeIcon$1>());
	}
	bool enablePrivileges = false;
	$Class* baseClass = nullptr;
	$Class* rootClass = nullptr;
	$String* imageFile = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SwingUtilities2$$Lambda$lambda$makeIcon$1::fieldInfos[5] = {
	{"enablePrivileges", "Z", nullptr, $PUBLIC, $field(SwingUtilities2$$Lambda$lambda$makeIcon$1, enablePrivileges)},
	{"baseClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(SwingUtilities2$$Lambda$lambda$makeIcon$1, baseClass)},
	{"rootClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(SwingUtilities2$$Lambda$lambda$makeIcon$1, rootClass)},
	{"imageFile", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SwingUtilities2$$Lambda$lambda$makeIcon$1, imageFile)},
	{}
};
$MethodInfo SwingUtilities2$$Lambda$lambda$makeIcon$1::methodInfos[3] = {
	{"<init>", "(ZLjava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SwingUtilities2$$Lambda$lambda$makeIcon$1::*)(bool,$Class*,$Class*,$String*)>(&SwingUtilities2$$Lambda$lambda$makeIcon$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SwingUtilities2$$Lambda$lambda$makeIcon$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.swing.SwingUtilities2$$Lambda$lambda$makeIcon$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	fieldInfos,
	methodInfos
};
$Class* SwingUtilities2$$Lambda$lambda$makeIcon$1::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities2$$Lambda$lambda$makeIcon$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SwingUtilities2$$Lambda$lambda$makeIcon$1::class$ = nullptr;

class SwingUtilities2$$Lambda$lambda$makeIcon$0$1 : public $PrivilegedAction {
	$class(SwingUtilities2$$Lambda$lambda$makeIcon$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* baseClass, $Class* rootClass, $String* imageFile) {
		this->baseClass = baseClass;
		this->rootClass = rootClass;
		$set(this, imageFile, imageFile);
	}
	virtual $Object* run() override {
		 return $of(SwingUtilities2::lambda$makeIcon$0(baseClass, rootClass, imageFile));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SwingUtilities2$$Lambda$lambda$makeIcon$0$1>());
	}
	$Class* baseClass = nullptr;
	$Class* rootClass = nullptr;
	$String* imageFile = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SwingUtilities2$$Lambda$lambda$makeIcon$0$1::fieldInfos[4] = {
	{"baseClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(SwingUtilities2$$Lambda$lambda$makeIcon$0$1, baseClass)},
	{"rootClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(SwingUtilities2$$Lambda$lambda$makeIcon$0$1, rootClass)},
	{"imageFile", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SwingUtilities2$$Lambda$lambda$makeIcon$0$1, imageFile)},
	{}
};
$MethodInfo SwingUtilities2$$Lambda$lambda$makeIcon$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SwingUtilities2$$Lambda$lambda$makeIcon$0$1::*)($Class*,$Class*,$String*)>(&SwingUtilities2$$Lambda$lambda$makeIcon$0$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SwingUtilities2$$Lambda$lambda$makeIcon$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.swing.SwingUtilities2$$Lambda$lambda$makeIcon$0$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SwingUtilities2$$Lambda$lambda$makeIcon$0$1::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities2$$Lambda$lambda$makeIcon$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SwingUtilities2$$Lambda$lambda$makeIcon$0$1::class$ = nullptr;

$FieldInfo _SwingUtilities2_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingUtilities2, $assertionsDisabled)},
	{"LAF_STATE_KEY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SwingUtilities2, LAF_STATE_KEY)},
	{"MENU_SELECTION_MANAGER_LISTENER_KEY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SwingUtilities2, MENU_SELECTION_MANAGER_LISTENER_KEY)},
	{"fontCache", "[Lsun/swing/SwingUtilities2$LSBCacheEntry;", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities2, fontCache)},
	{"CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingUtilities2, CACHE_SIZE)},
	{"nextIndex", "I", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities2, nextIndex)},
	{"searchKey", "Lsun/swing/SwingUtilities2$LSBCacheEntry;", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities2, searchKey)},
	{"MIN_CHAR_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingUtilities2, MIN_CHAR_INDEX)},
	{"MAX_CHAR_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingUtilities2, MAX_CHAR_INDEX)},
	{"DEFAULT_FRC", "Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SwingUtilities2, DEFAULT_FRC)},
	{"IMPLIED_CR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SwingUtilities2, IMPLIED_CR)},
	{"SKIP_CLICK_COUNT", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities2, SKIP_CLICK_COUNT)},
	{"BASICMENUITEMUI_MAX_TEXT_OFFSET", "Lsun/swing/StringUIClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SwingUtilities2, BASICMENUITEMUI_MAX_TEXT_OFFSET)},
	{"UntrustedClipboardAccess", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities2, UntrustedClipboardAccess)},
	{"CHAR_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingUtilities2, CHAR_BUFFER_SIZE)},
	{"charsBufferLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities2, charsBufferLock)},
	{"charsBuffer", "[C", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities2, charsBuffer)},
	{"APP_CONTEXT_FRC_CACHE_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities2, APP_CONTEXT_FRC_CACHE_KEY)},
	{}
};

$MethodInfo _SwingUtilities2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwingUtilities2::*)()>(&SwingUtilities2::init$))},
	{"adjustFocus", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*)>(&SwingUtilities2::adjustFocus))},
	{"canAccessSystemClipboard", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SwingUtilities2::canAccessSystemClipboard))},
	{"canCurrentEventAccessSystemClipboard", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SwingUtilities2::canCurrentEventAccessSystemClipboard))},
	{"canCurrentEventAccessSystemClipboard", "(Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(bool)>(&SwingUtilities2::canCurrentEventAccessSystemClipboard))},
	{"canEventAccessSystemClipboard", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AWTEvent*)>(&SwingUtilities2::canEventAccessSystemClipboard))},
	{"canEventAccessSystemClipboard", "(Ljava/awt/AWTEvent;Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($AWTEvent*,bool)>(&SwingUtilities2::canEventAccessSystemClipboard))},
	{"checkAccess", "(I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t)>(&SwingUtilities2::checkAccess))},
	{"clipString", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($JComponent*,$FontMetrics*,$String*,int32_t)>(&SwingUtilities2::clipString))},
	{"clipStringIfNecessary", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($JComponent*,$FontMetrics*,$String*,int32_t)>(&SwingUtilities2::clipStringIfNecessary))},
	{"compositeRequestFocus", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($Component*)>(&SwingUtilities2::compositeRequestFocus))},
	{"convertColumnIndexToModel", "(Ljavax/swing/table/TableColumnModel;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($TableColumnModel*,int32_t)>(&SwingUtilities2::convertColumnIndexToModel))},
	{"convertColumnIndexToView", "(Ljavax/swing/table/TableColumnModel;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($TableColumnModel*,int32_t)>(&SwingUtilities2::convertColumnIndexToView))},
	{"createTextLayout", "(Ljavax/swing/JComponent;Ljava/lang/String;Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)Ljava/awt/font/TextLayout;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$TextLayout*(*)($JComponent*,$String*,$Font*,$FontRenderContext*)>(&SwingUtilities2::createTextLayout))},
	{"displayPropertiesToCSS", "(Ljava/awt/Font;Ljava/awt/Color;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Font*,$Color*)>(&SwingUtilities2::displayPropertiesToCSS))},
	{"drawChars", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;[CIIII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JComponent*,$Graphics*,$chars*,int32_t,int32_t,int32_t,int32_t)>(&SwingUtilities2::drawChars))},
	{"drawChars", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;[CIIFF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($JComponent*,$Graphics*,$chars*,int32_t,int32_t,float,float)>(&SwingUtilities2::drawChars))},
	{"drawChars", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;[CIIFFZ)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($JComponent*,$Graphics*,$chars*,int32_t,int32_t,float,float,bool)>(&SwingUtilities2::drawChars))},
	{"drawHLine", "(Ljava/awt/Graphics;III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t)>(&SwingUtilities2::drawHLine))},
	{"drawRect", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&SwingUtilities2::drawRect))},
	{"drawString", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics*,$String*,int32_t,int32_t)>(&SwingUtilities2::drawString))},
	{"drawString", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/lang/String;FFZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics*,$String*,float,float,bool)>(&SwingUtilities2::drawString))},
	{"drawString", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/text/AttributedCharacterIterator;II)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($JComponent*,$Graphics*,$AttributedCharacterIterator*,int32_t,int32_t)>(&SwingUtilities2::drawString))},
	{"drawString", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/text/AttributedCharacterIterator;FF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($JComponent*,$Graphics*,$AttributedCharacterIterator*,float,float)>(&SwingUtilities2::drawString))},
	{"drawStringImpl", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/text/AttributedCharacterIterator;FF)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)($JComponent*,$Graphics*,$AttributedCharacterIterator*,float,float)>(&SwingUtilities2::drawStringImpl))},
	{"drawStringUnderlineCharAt", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/lang/String;III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics*,$String*,int32_t,int32_t,int32_t)>(&SwingUtilities2::drawStringUnderlineCharAt))},
	{"drawStringUnderlineCharAt", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/lang/String;IFFZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$Graphics*,$String*,int32_t,float,float,bool)>(&SwingUtilities2::drawStringUnderlineCharAt))},
	{"drawVLine", "(Ljava/awt/Graphics;III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t)>(&SwingUtilities2::drawVLine))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Runnable*)>(&SwingUtilities2::execute))},
	{"getAdjustedClickCount", "(Ljavax/swing/text/JTextComponent;Ljava/awt/event/MouseEvent;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JTextComponent*,$MouseEvent*)>(&SwingUtilities2::getAdjustedClickCount))},
	{"getAndSetAntialisingHintForScaledGraphics", "(Ljava/awt/Graphics;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Graphics*)>(&SwingUtilities2::getAndSetAntialisingHintForScaledGraphics))},
	{"getBoolean", "(Ljavax/swing/JComponent;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JComponent*,$String*)>(&SwingUtilities2::getBoolean))},
	{"getFRCFromCache", "(Ljava/awt/geom/AffineTransform;Ljava/lang/Object;)Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FontRenderContext*(*)($AffineTransform*,Object$*)>(&SwingUtilities2::getFRCFromCache))},
	{"getFRCProperty", "(Ljavax/swing/JComponent;)Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FontRenderContext*(*)($JComponent*)>(&SwingUtilities2::getFRCProperty))},
	{"getFontCharWidth", "(CLjava/awt/FontMetrics;Z)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)(char16_t,$FontMetrics*,bool)>(&SwingUtilities2::getFontCharWidth))},
	{"getFontCharsWidth", "([CIILjava/awt/FontMetrics;Z)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($chars*,int32_t,int32_t,$FontMetrics*,bool)>(&SwingUtilities2::getFontCharsWidth))},
	{"getFontMetrics", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontMetrics*(*)($JComponent*,$Graphics*)>(&SwingUtilities2::getFontMetrics))},
	{"getFontMetrics", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontMetrics*(*)($JComponent*,$Graphics*,$Font*)>(&SwingUtilities2::getFontMetrics))},
	{"getFontMetrics", "(Ljavax/swing/JComponent;Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontMetrics*(*)($JComponent*,$Font*)>(&SwingUtilities2::getFontMetrics))},
	{"getFontRenderContext", "(Ljava/awt/Component;)Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontRenderContext*(*)($Component*)>(&SwingUtilities2::getFontRenderContext))},
	{"getFontRenderContext", "(Ljava/awt/Component;Ljava/awt/FontMetrics;)Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FontRenderContext*(*)($Component*,$FontMetrics*)>(&SwingUtilities2::getFontRenderContext))},
	{"getFontStringWidth", "(Ljava/lang/String;Ljava/awt/FontMetrics;Z)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($String*,$FontMetrics*,bool)>(&SwingUtilities2::getFontStringWidth))},
	{"getGraphics2D", "(Ljava/awt/Graphics;)Ljava/awt/Graphics2D;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Graphics2D*(*)($Graphics*)>(&SwingUtilities2::getGraphics2D))},
	{"getIconBytes", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)[B", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/String;)[B", $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($Class*,$Class*,$String*)>(&SwingUtilities2::getIconBytes))},
	{"getLeftSideBearing", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JComponent*,$FontMetrics*,$String*)>(&SwingUtilities2::getLeftSideBearing))},
	{"getLeftSideBearing", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JComponent*,$FontMetrics*,char16_t)>(&SwingUtilities2::getLeftSideBearing))},
	{"getSystemMnemonicKeyMask", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&SwingUtilities2::getSystemMnemonicKeyMask))},
	{"getTreePath", "(Ljavax/swing/event/TreeModelEvent;Ljavax/swing/tree/TreeModel;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TreePath*(*)($TreeModelEvent*,$TreeModel*)>(&SwingUtilities2::getTreePath))},
	{"getTrimmedTrailingSpacesIterator", "(Ljava/text/AttributedCharacterIterator;)Ljava/text/AttributedCharacterIterator;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AttributedCharacterIterator*(*)($AttributedCharacterIterator*)>(&SwingUtilities2::getTrimmedTrailingSpacesIterator))},
	{"getUIDefaultsInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*)>(&SwingUtilities2::getUIDefaultsInt))},
	{"getUIDefaultsInt", "(Ljava/lang/Object;Ljava/util/Locale;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*,$Locale*)>(&SwingUtilities2::getUIDefaultsInt))},
	{"getUIDefaultsInt", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*,int32_t)>(&SwingUtilities2::getUIDefaultsInt))},
	{"getUIDefaultsInt", "(Ljava/lang/Object;Ljava/util/Locale;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(Object$*,$Locale*,int32_t)>(&SwingUtilities2::getUIDefaultsInt))},
	{"isAccessClipboardGesture", "(Ljava/awt/event/InputEvent;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($InputEvent*)>(&SwingUtilities2::isAccessClipboardGesture))},
	{"isComplexLayout", "([CII)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)($chars*,int32_t,int32_t)>(&SwingUtilities2::isComplexLayout))},
	{"isFloatingPointScale", "(Ljava/awt/geom/AffineTransform;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AffineTransform*)>(&SwingUtilities2::isFloatingPointScale))},
	{"isFontRenderContextPrintCompatible", "(Ljava/awt/font/FontRenderContext;Ljava/awt/font/FontRenderContext;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($FontRenderContext*,$FontRenderContext*)>(&SwingUtilities2::isFontRenderContextPrintCompatible))},
	{"isLocalDisplay", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SwingUtilities2::isLocalDisplay))},
	{"isPrinting", "(Ljava/awt/Graphics;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Graphics*)>(&SwingUtilities2::isPrinting))},
	{"isScaleChanged", "(Ljava/beans/PropertyChangeEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PropertyChangeEvent*)>(&SwingUtilities2::isScaleChanged))},
	{"isScaleChanged", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*,Object$*,Object$*)>(&SwingUtilities2::isScaleChanged))},
	{"isScaledGraphics", "(Ljava/awt/Graphics;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Graphics*)>(&SwingUtilities2::isScaledGraphics))},
	{"isTrustedContext", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&SwingUtilities2::isTrustedContext))},
	{"lambda$makeIcon$0", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$bytes*(*)($Class*,$Class*,$String*)>(&SwingUtilities2::lambda$makeIcon$0))},
	{"lambda$makeIcon$1", "(ZLjava/lang/Class;Ljava/lang/Class;Ljava/lang/String;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(bool,$Class*,$Class*,$String*,$UIDefaults*)>(&SwingUtilities2::lambda$makeIcon$1))},
	{"liesIn", "(Ljava/awt/Rectangle;Ljava/awt/Point;ZZZ)Lsun/swing/SwingUtilities2$Section;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SwingUtilities2$Section*(*)($Rectangle*,$Point*,bool,bool,bool)>(&SwingUtilities2::liesIn))},
	{"liesInHorizontal", "(Ljava/awt/Rectangle;Ljava/awt/Point;ZZ)Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SwingUtilities2$Section*(*)($Rectangle*,$Point*,bool,bool)>(&SwingUtilities2::liesInHorizontal))},
	{"liesInVertical", "(Ljava/awt/Rectangle;Ljava/awt/Point;Z)Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SwingUtilities2$Section*(*)($Rectangle*,$Point*,bool)>(&SwingUtilities2::liesInVertical))},
	{"loc2IndexFileList", "(Ljavax/swing/JList;Ljava/awt/Point;)I", "(Ljavax/swing/JList<*>;Ljava/awt/Point;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JList*,$Point*)>(&SwingUtilities2::loc2IndexFileList))},
	{"makeIcon", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,$Class*,$String*)>(&SwingUtilities2::makeIcon))},
	{"makeIcon", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;Z)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/String;Z)Ljava/lang/Object;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Class*,$Class*,$String*,bool)>(&SwingUtilities2::makeIcon))},
	{"makeIcon_Unprivileged", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Class*,$Class*,$String*)>(&SwingUtilities2::makeIcon_Unprivileged))},
	{"pointIsInActualBounds", "(Ljavax/swing/JList;ILjava/awt/Point;)Z", "<T:Ljava/lang/Object;>(Ljavax/swing/JList<TT;>;ILjava/awt/Point;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($JList*,int32_t,$Point*)>(&SwingUtilities2::pointIsInActualBounds))},
	{"pointOutsidePrefSize", "(Ljavax/swing/JTable;IILjava/awt/Point;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JTable*,int32_t,int32_t,$Point*)>(&SwingUtilities2::pointOutsidePrefSize))},
	{"putAATextInfo", "(ZLjava/util/Map;)V", "(ZLjava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,$Map*)>(&SwingUtilities2::putAATextInfo))},
	{"setAltGraphMask", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&SwingUtilities2::setAltGraphMask))},
	{"setAntialiasingHintForScaledGraphics", "(Ljava/awt/Graphics;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,Object$*)>(&SwingUtilities2::setAntialiasingHintForScaledGraphics))},
	{"setLeadAnchorWithoutSelection", "(Ljavax/swing/ListSelectionModel;II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ListSelectionModel*,int32_t,int32_t)>(&SwingUtilities2::setLeadAnchorWithoutSelection))},
	{"setSkipClickCount", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,int32_t)>(&SwingUtilities2::setSkipClickCount))},
	{"shouldIgnore", "(Ljava/awt/event/MouseEvent;Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MouseEvent*,$JComponent*)>(&SwingUtilities2::shouldIgnore))},
	{"stringWidth", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JComponent*,$FontMetrics*,$String*)>(&SwingUtilities2::stringWidth))},
	{"stringWidth", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;Z)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($JComponent*,$FontMetrics*,$String*,bool)>(&SwingUtilities2::stringWidth))},
	{"submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", "<V:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TV;>;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $STATIC, $method(static_cast<$Future*(*)($Callable*)>(&SwingUtilities2::submit))},
	{"submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", "<V:Ljava/lang/Object;>(Ljava/lang/Runnable;TV;)Ljava/util/concurrent/Future<TV;>;", $PUBLIC | $STATIC, $method(static_cast<$Future*(*)($Runnable*,Object$*)>(&SwingUtilities2::submit))},
	{"syncCharsBuffer", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&SwingUtilities2::syncCharsBuffer))},
	{"tabbedPaneChangeFocusTo", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*)>(&SwingUtilities2::tabbedPaneChangeFocusTo))},
	{"trimTrailingSpaces", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&SwingUtilities2::trimTrailingSpaces))},
	{"useSelectedTextColor", "(Ljavax/swing/text/Highlighter$Highlight;Ljavax/swing/text/JTextComponent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Highlighter$Highlight*,$JTextComponent*)>(&SwingUtilities2::useSelectedTextColor))},
	{}
};

$InnerClassInfo _SwingUtilities2_InnerClassesInfo_[] = {
	{"sun.swing.SwingUtilities2$RepaintListener", "sun.swing.SwingUtilities2", "RepaintListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.SwingUtilities2$Section", "sun.swing.SwingUtilities2", "Section", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"sun.swing.SwingUtilities2$LSBCacheEntry", "sun.swing.SwingUtilities2", "LSBCacheEntry", $PRIVATE | $STATIC},
	{"sun.swing.SwingUtilities2$KeyPair", "sun.swing.SwingUtilities2", "KeyPair", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SwingUtilities2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.SwingUtilities2",
	"java.lang.Object",
	nullptr,
	_SwingUtilities2_FieldInfo_,
	_SwingUtilities2_MethodInfo_,
	nullptr,
	nullptr,
	_SwingUtilities2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.SwingUtilities2$RepaintListener,sun.swing.SwingUtilities2$Section,sun.swing.SwingUtilities2$LSBCacheEntry,sun.swing.SwingUtilities2$KeyPair"
};

$Object* allocate$SwingUtilities2($Class* clazz) {
	return $of($alloc(SwingUtilities2));
}

bool SwingUtilities2::$assertionsDisabled = false;

$Object* SwingUtilities2::LAF_STATE_KEY = nullptr;
$Object* SwingUtilities2::MENU_SELECTION_MANAGER_LISTENER_KEY = nullptr;
$SwingUtilities2$LSBCacheEntryArray* SwingUtilities2::fontCache = nullptr;
int32_t SwingUtilities2::nextIndex = 0;
$SwingUtilities2$LSBCacheEntry* SwingUtilities2::searchKey = nullptr;
$FontRenderContext* SwingUtilities2::DEFAULT_FRC = nullptr;

$String* SwingUtilities2::IMPLIED_CR = nullptr;

$StringBuilder* SwingUtilities2::SKIP_CLICK_COUNT = nullptr;

$StringUIClientPropertyKey* SwingUtilities2::BASICMENUITEMUI_MAX_TEXT_OFFSET = nullptr;
$String* SwingUtilities2::UntrustedClipboardAccess = nullptr;
$Object* SwingUtilities2::charsBufferLock = nullptr;
$chars* SwingUtilities2::charsBuffer = nullptr;
$Object* SwingUtilities2::APP_CONTEXT_FRC_CACHE_KEY = nullptr;

void SwingUtilities2::init$() {
}

void SwingUtilities2::putAATextInfo(bool lafCondition, $Map* map) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$SunToolkit::setAAFontSettingsCondition(lafCondition);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$var($Object, desktopHints, $nc(tk)->getDesktopProperty($SunToolkit::DESKTOPFONTHINTS));
	if ($instanceOf($Map, desktopHints)) {
		$var($Map, hints, $cast($Map, desktopHints));
		$init($RenderingHints);
		$var($Object, aaHint, $nc(hints)->get($RenderingHints::KEY_TEXT_ANTIALIASING));
		if (aaHint == nullptr || $equals(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_OFF) || $equals(aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT)) {
			return;
		}
		$nc(map)->put($RenderingHints::KEY_TEXT_ANTIALIASING, aaHint);
		map->put($RenderingHints::KEY_TEXT_LCD_CONTRAST, $(hints->get($RenderingHints::KEY_TEXT_LCD_CONTRAST)));
	}
}

int32_t SwingUtilities2::syncCharsBuffer($String* s) {
	$init(SwingUtilities2);
	int32_t length = $nc(s)->length();
	if ((SwingUtilities2::charsBuffer == nullptr) || ($nc(SwingUtilities2::charsBuffer)->length < length)) {
		$assignStatic(SwingUtilities2::charsBuffer, s->toCharArray());
	} else {
		s->getChars(0, length, SwingUtilities2::charsBuffer, 0);
	}
	return length;
}

bool SwingUtilities2::isComplexLayout($chars* text, int32_t start, int32_t limit) {
	$init(SwingUtilities2);
	return $FontUtilities::isComplexText(text, start, limit);
}

int32_t SwingUtilities2::getLeftSideBearing($JComponent* c, $FontMetrics* fm, $String* string) {
	$init(SwingUtilities2);
	if ((string == nullptr) || ($nc(string)->length() == 0)) {
		return 0;
	}
	return getLeftSideBearing(c, fm, $nc(string)->charAt(0));
}

int32_t SwingUtilities2::getLeftSideBearing($JComponent* c, $FontMetrics* fm, char16_t firstChar) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	int32_t charIndex = (int32_t)firstChar;
	if (charIndex < SwingUtilities2::MAX_CHAR_INDEX && charIndex >= SwingUtilities2::MIN_CHAR_INDEX) {
		$var($bytes, lsbs, nullptr);
		$var($FontRenderContext, frc, getFontRenderContext(c, fm));
		$var($Font, font, $nc(fm)->getFont());
		$synchronized(SwingUtilities2::class$) {
			$var($SwingUtilities2$LSBCacheEntry, entry, nullptr);
			if (SwingUtilities2::searchKey == nullptr) {
				$assignStatic(SwingUtilities2::searchKey, $new($SwingUtilities2$LSBCacheEntry, frc, font));
			} else {
				$nc(SwingUtilities2::searchKey)->reset(frc, font);
			}
			{
				$var($SwingUtilities2$LSBCacheEntryArray, arr$, SwingUtilities2::fontCache);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($SwingUtilities2$LSBCacheEntry, cacheEntry, arr$->get(i$));
					{
						if ($nc(SwingUtilities2::searchKey)->equals(cacheEntry)) {
							$assign(entry, cacheEntry);
							break;
						}
					}
				}
			}
			if (entry == nullptr) {
				$assign(entry, SwingUtilities2::searchKey);
				$nc(SwingUtilities2::fontCache)->set(SwingUtilities2::nextIndex, SwingUtilities2::searchKey);
				$assignStatic(SwingUtilities2::searchKey, nullptr);
				SwingUtilities2::nextIndex = $mod((SwingUtilities2::nextIndex + 1), SwingUtilities2::CACHE_SIZE);
			}
			return $nc(entry)->getLeftSideBearing(firstChar);
		}
	}
	return 0;
}

$FontMetrics* SwingUtilities2::getFontMetrics($JComponent* c, $Graphics* g) {
	$init(SwingUtilities2);
	return getFontMetrics(c, g, $($nc(g)->getFont()));
}

$FontMetrics* SwingUtilities2::getFontMetrics($JComponent* c, $Graphics* g, $Font* font) {
	$init(SwingUtilities2);
	if (c != nullptr) {
		return c->getFontMetrics(font);
	}
	return $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(font);
}

int32_t SwingUtilities2::stringWidth($JComponent* c, $FontMetrics* fm, $String* string) {
	$init(SwingUtilities2);
	return $cast(int32_t, stringWidth(c, fm, string, false));
}

float SwingUtilities2::stringWidth($JComponent* c, $FontMetrics* fm, $String* string, bool useFPAPI) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (string == nullptr || $nc(string)->isEmpty()) {
		return (float)0;
	}
	$init($TextAttribute);
	bool needsTextLayout = ((c != nullptr) && (c->getClientProperty($TextAttribute::NUMERIC_SHAPING) != nullptr));
	if (needsTextLayout) {
		$synchronized(SwingUtilities2::charsBufferLock) {
			int32_t length = syncCharsBuffer(string);
			needsTextLayout = isComplexLayout(SwingUtilities2::charsBuffer, 0, length);
		}
	}
	if (needsTextLayout) {
		$var($JComponent, var$0, c);
		$var($String, var$1, string);
		$var($Font, var$2, $nc(fm)->getFont());
		$var($TextLayout, layout, createTextLayout(var$0, var$1, var$2, $(fm->getFontRenderContext())));
		return $nc(layout)->getAdvance();
	} else {
		return getFontStringWidth(string, fm, useFPAPI);
	}
}

$String* SwingUtilities2::clipStringIfNecessary($JComponent* c, $FontMetrics* fm, $String* string, int32_t availTextWidth) {
	$init(SwingUtilities2);
	if (string == nullptr || $nc(string)->isEmpty()) {
		return ""_s;
	}
	int32_t textWidth = SwingUtilities2::stringWidth(c, fm, string);
	if (textWidth > availTextWidth) {
		return SwingUtilities2::clipString(c, fm, string, availTextWidth);
	}
	return string;
}

$String* SwingUtilities2::clipString($JComponent* c, $FontMetrics* fm, $String* string$renamed, int32_t availTextWidth) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$var($String, string, string$renamed);
	$var($String, clipString, "..."_s);
	availTextWidth -= SwingUtilities2::stringWidth(c, fm, clipString);
	if (availTextWidth <= 0) {
		return clipString;
	}
	bool needsTextLayout = false;
	$synchronized(SwingUtilities2::charsBufferLock) {
		int32_t stringLength = syncCharsBuffer(string);
		needsTextLayout = isComplexLayout(SwingUtilities2::charsBuffer, 0, stringLength);
		if (!needsTextLayout) {
			int32_t width = 0;
			for (int32_t nChars = 0; nChars < stringLength; ++nChars) {
				width += $nc(fm)->charWidth($nc(SwingUtilities2::charsBuffer)->get(nChars));
				if (width > availTextWidth) {
					$assign(string, $nc(string)->substring(0, nChars));
					break;
				}
			}
		}
	}
	if (needsTextLayout) {
		$var($AttributedString, aString, $new($AttributedString, string));
		if (c != nullptr) {
			$init($TextAttribute);
			aString->addAttribute($TextAttribute::NUMERIC_SHAPING, $(c->getClientProperty($TextAttribute::NUMERIC_SHAPING)));
		}
		$var($AttributedCharacterIterator, var$0, aString->getIterator());
		$var($BreakIterator, var$1, $BreakIterator::getCharacterInstance());
		$var($LineBreakMeasurer, measurer, $new($LineBreakMeasurer, var$0, var$1, $(getFontRenderContext(c, fm))));
		$assign(string, $nc(string)->substring(0, measurer->nextOffset((float)availTextWidth)));
	}
	return $str({string, clipString});
}

void SwingUtilities2::drawString($JComponent* c, $Graphics* g, $String* text, int32_t x, int32_t y) {
	$init(SwingUtilities2);
	drawString(c, g, text, (float)x, (float)y, false);
}

void SwingUtilities2::drawString($JComponent* c, $Graphics* g, $String* text, float x, float y, bool useFPAPI) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (text == nullptr || $nc(text)->length() <= 0) {
		return;
	}
	if (isPrinting(g)) {
		$var($Graphics2D, g2d, getGraphics2D(g));
		if (g2d != nullptr) {
			$var($String, trimmedText, trimTrailingSpaces(text));
			if (!$nc(trimmedText)->isEmpty()) {
				float screenWidth = (float)$nc($($nc($(g2d->getFont()))->getStringBounds(trimmedText, $(getFontRenderContext(c)))))->getWidth();
				$var($JComponent, var$0, c);
				$var($String, var$1, text);
				$var($Font, var$2, g2d->getFont());
				$var($TextLayout, layout, createTextLayout(var$0, var$1, var$2, $(g2d->getFontRenderContext())));
				if (SwingUtilities2::stringWidth(c, $(g2d->getFontMetrics()), trimmedText) > screenWidth) {
					$assign(layout, $nc(layout)->getJustifiedLayout(screenWidth));
				}
				$var($Color, col, g2d->getColor());
				if ($instanceOf($PrintColorUIResource, col)) {
					g2d->setColor($($nc(($cast($PrintColorUIResource, col)))->getPrintColor()));
				}
				$nc(layout)->draw(g2d, x, y);
				g2d->setColor(col);
			}
			return;
		}
	}
	if ($instanceOf($Graphics2D, g)) {
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		$init($TextAttribute);
		bool needsTextLayout = ((c != nullptr) && (c->getClientProperty($TextAttribute::NUMERIC_SHAPING) != nullptr));
		if (needsTextLayout) {
			$synchronized(SwingUtilities2::charsBufferLock) {
				int32_t length = syncCharsBuffer(text);
				needsTextLayout = isComplexLayout(SwingUtilities2::charsBuffer, 0, length);
			}
		}
		$init($RenderingHints);
		$var($Object, aaHint, (c == nullptr) ? ($Object*)nullptr : c->getClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING));
		if (aaHint != nullptr) {
			$var($Object, oldContrast, nullptr);
			$var($Object, oldAAValue, $nc(g2)->getRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING));
			if (!$equals(aaHint, oldAAValue)) {
				g2->setRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING, aaHint);
			} else {
				$assign(oldAAValue, nullptr);
			}
			$var($Object, lcdContrastHint, c->getClientProperty($RenderingHints::KEY_TEXT_LCD_CONTRAST));
			if (lcdContrastHint != nullptr) {
				$assign(oldContrast, g2->getRenderingHint($RenderingHints::KEY_TEXT_LCD_CONTRAST));
				if ($of(lcdContrastHint)->equals(oldContrast)) {
					$assign(oldContrast, nullptr);
				} else {
					g2->setRenderingHint($RenderingHints::KEY_TEXT_LCD_CONTRAST, lcdContrastHint);
				}
			}
			if (needsTextLayout) {
				$var($JComponent, var$3, c);
				$var($String, var$4, text);
				$var($Font, var$5, g2->getFont());
				$var($TextLayout, layout, createTextLayout(var$3, var$4, var$5, $(g2->getFontRenderContext())));
				$nc(layout)->draw(g2, x, y);
			} else {
				g2->drawString(text, x, y);
			}
			if (oldAAValue != nullptr) {
				g2->setRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING, oldAAValue);
			}
			if (oldContrast != nullptr) {
				g2->setRenderingHint($RenderingHints::KEY_TEXT_LCD_CONTRAST, oldContrast);
			}
			return;
		}
		if (needsTextLayout) {
			$var($JComponent, var$6, c);
			$var($String, var$7, text);
			$var($Font, var$8, $nc(g2)->getFont());
			$var($TextLayout, layout, createTextLayout(var$6, var$7, var$8, $(g2->getFontRenderContext())));
			$nc(layout)->draw(g2, x, y);
			return;
		}
	}
	$nc(g)->drawString(text, $cast(int32_t, x), $cast(int32_t, y));
}

void SwingUtilities2::drawStringUnderlineCharAt($JComponent* c, $Graphics* g, $String* text, int32_t underlinedIndex, int32_t x, int32_t y) {
	$init(SwingUtilities2);
	drawStringUnderlineCharAt(c, g, text, underlinedIndex, (float)x, (float)y, false);
}

void SwingUtilities2::drawStringUnderlineCharAt($JComponent* c, $Graphics* g, $String* text, int32_t underlinedIndex, float x, float y, bool useFPAPI) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (text == nullptr || $nc(text)->length() <= 0) {
		return;
	}
	SwingUtilities2::drawString(c, g, text, x, y, useFPAPI);
	int32_t textLength = $nc(text)->length();
	if (underlinedIndex >= 0 && underlinedIndex < textLength) {
		float underlineRectY = y;
		int32_t underlineRectHeight = 1;
		float underlineRectX = (float)0;
		int32_t underlineRectWidth = 0;
		bool isPrinting = SwingUtilities2::isPrinting(g);
		bool needsTextLayout = isPrinting;
		if (!needsTextLayout) {
			$synchronized(SwingUtilities2::charsBufferLock) {
				syncCharsBuffer(text);
				needsTextLayout = isComplexLayout(SwingUtilities2::charsBuffer, 0, textLength);
			}
		}
		if (!needsTextLayout) {
			$var($FontMetrics, fm, $nc(g)->getFontMetrics());
			underlineRectX = x + SwingUtilities2::stringWidth(c, fm, $(text->substring(0, underlinedIndex)));
			underlineRectWidth = $nc(fm)->charWidth(text->charAt(underlinedIndex));
		} else {
			$var($Graphics2D, g2d, getGraphics2D(g));
			if (g2d != nullptr) {
				$var($JComponent, var$0, c);
				$var($String, var$1, text);
				$var($Font, var$2, g2d->getFont());
				$var($TextLayout, layout, createTextLayout(var$0, var$1, var$2, $(g2d->getFontRenderContext())));
				if (isPrinting) {
					float screenWidth = (float)$nc($($nc($(g2d->getFont()))->getStringBounds(text, $(getFontRenderContext(c)))))->getWidth();
					if (SwingUtilities2::stringWidth(c, $(g2d->getFontMetrics()), text) > screenWidth) {
						$assign(layout, $nc(layout)->getJustifiedLayout(screenWidth));
					}
				}
				$var($TextHitInfo, leading, $TextHitInfo::leading(underlinedIndex));
				$var($TextHitInfo, trailing, $TextHitInfo::trailing(underlinedIndex));
				$var($Shape, shape, $nc(layout)->getVisualHighlightShape(leading, trailing));
				$var($Rectangle, rect, $nc(shape)->getBounds());
				underlineRectX = x + $nc(rect)->x;
				underlineRectWidth = rect->width;
			}
		}
		$nc(g)->fillRect($cast(int32_t, underlineRectX), $cast(int32_t, underlineRectY) + 1, underlineRectWidth, underlineRectHeight);
	}
}

int32_t SwingUtilities2::loc2IndexFileList($JList* list, $Point* point) {
	$init(SwingUtilities2);
	int32_t index = $nc(list)->locationToIndex(point);
	if (index != -1) {
		$var($Object, bySize, list->getClientProperty("List.isFileList"_s));
		bool var$0 = $instanceOf($Boolean, bySize) && $nc(($cast($Boolean, bySize)))->booleanValue();
		if (var$0 && !pointIsInActualBounds(list, index, point)) {
			index = -1;
		}
	}
	return index;
}

bool SwingUtilities2::pointIsInActualBounds($JList* list, int32_t index, $Point* point) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$var($ListCellRenderer, renderer, $nc(list)->getCellRenderer());
	$var($Object, value, $nc($(list->getModel()))->getElementAt(index));
	$var($Component, item, $nc(renderer)->getListCellRendererComponent(list, value, index, false, false));
	$var($Dimension, itemSize, $nc(item)->getPreferredSize());
	$var($Rectangle, cellBounds, list->getCellBounds(index, index));
	if (!$nc($(item->getComponentOrientation()))->isLeftToRight()) {
		$nc(cellBounds)->x += (cellBounds->width - $nc(itemSize)->width);
	}
	$nc(cellBounds)->width = $nc(itemSize)->width;
	return cellBounds->contains(point);
}

bool SwingUtilities2::pointOutsidePrefSize($JTable* table, int32_t row, int32_t column, $Point* p) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if ($nc(table)->convertColumnIndexToModel(column) != 0 || row == -1) {
		return true;
	}
	$var($TableCellRenderer, tcr, $nc(table)->getCellRenderer(row, column));
	$var($Object, value, table->getValueAt(row, column));
	$var($Component, cell, $nc(tcr)->getTableCellRendererComponent(table, value, false, false, row, column));
	$var($Dimension, itemSize, $nc(cell)->getPreferredSize());
	$var($Rectangle, cellBounds, table->getCellRect(row, column, false));
	$nc(cellBounds)->width = $nc(itemSize)->width;
	cellBounds->height = itemSize->height;
	if (!SwingUtilities2::$assertionsDisabled && !($nc(p)->x >= cellBounds->x && p->y >= cellBounds->y)) {
		$throwNew($AssertionError);
	}
	return $nc(p)->x > cellBounds->x + cellBounds->width || $nc(p)->y > cellBounds->y + cellBounds->height;
}

void SwingUtilities2::setLeadAnchorWithoutSelection($ListSelectionModel* model, int32_t lead, int32_t anchor) {
	$init(SwingUtilities2);
	if (anchor == -1) {
		anchor = lead;
	}
	if (lead == -1) {
		$nc(model)->setAnchorSelectionIndex(-1);
		model->setLeadSelectionIndex(-1);
	} else {
		if ($nc(model)->isSelectedIndex(lead)) {
			model->addSelectionInterval(lead, lead);
		} else {
			model->removeSelectionInterval(lead, lead);
		}
		$nc(model)->setAnchorSelectionIndex(anchor);
	}
}

bool SwingUtilities2::shouldIgnore($MouseEvent* me, $JComponent* c) {
	$init(SwingUtilities2);
	bool var$1 = c == nullptr || !$nc(c)->isEnabled();
	bool var$0 = var$1 || !$SwingUtilities::isLeftMouseButton(me);
	return var$0 || $nc(me)->isConsumed();
}

void SwingUtilities2::adjustFocus($JComponent* c) {
	$init(SwingUtilities2);
	bool var$0 = !$nc(c)->hasFocus();
	if (var$0 && c->isRequestFocusEnabled()) {
		c->requestFocus();
	}
}

int32_t SwingUtilities2::drawChars($JComponent* c, $Graphics* g, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$init(SwingUtilities2);
	return $cast(int32_t, drawChars(c, g, data, offset, length, (float)x, (float)y, false));
}

float SwingUtilities2::drawChars($JComponent* c, $Graphics* g, $chars* data, int32_t offset, int32_t length, float x, float y) {
	$init(SwingUtilities2);
	return drawChars(c, g, data, offset, length, x, y, true);
}

float SwingUtilities2::drawChars($JComponent* c, $Graphics* g, $chars* data, int32_t offset, int32_t length, float x, float y, bool useFPAPI) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (length <= 0) {
		return x;
	}
	float nextX = x + getFontCharsWidth(data, offset, length, $(getFontMetrics(c, g)), useFPAPI);
	if (isPrinting(g)) {
		$var($Graphics2D, g2d, getGraphics2D(g));
		if (g2d != nullptr) {
			$var($FontRenderContext, deviceFontRenderContext, g2d->getFontRenderContext());
			$var($FontRenderContext, frc, getFontRenderContext(c));
			if (frc != nullptr && !isFontRenderContextPrintCompatible(deviceFontRenderContext, frc)) {
				$var($String, text, $new($String, data, offset, length));
				$var($TextLayout, layout, $new($TextLayout, text, $(g2d->getFont()), deviceFontRenderContext));
				$var($String, trimmedText, trimTrailingSpaces(text));
				if (!$nc(trimmedText)->isEmpty()) {
					float screenWidth = (float)$nc($($nc($(g2d->getFont()))->getStringBounds(trimmedText, frc)))->getWidth();
					if (SwingUtilities2::stringWidth(c, $(g2d->getFontMetrics()), trimmedText) > screenWidth) {
						$assign(layout, layout->getJustifiedLayout(screenWidth));
					}
					$var($Color, col, g2d->getColor());
					if ($instanceOf($PrintColorUIResource, col)) {
						g2d->setColor($($nc(($cast($PrintColorUIResource, col)))->getPrintColor()));
					}
					layout->draw(g2d, x, y);
					g2d->setColor(col);
				}
				return nextX;
			}
		}
	}
	$init($RenderingHints);
	$var($Object, aaHint, (c == nullptr) ? ($Object*)nullptr : $nc(c)->getClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING));
	if (!($instanceOf($Graphics2D, g))) {
		$nc(g)->drawChars(data, offset, length, $cast(int32_t, x), $cast(int32_t, y));
		return nextX;
	}
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	if (aaHint != nullptr) {
		$var($Object, oldContrast, nullptr);
		$var($Object, oldAAValue, $nc(g2)->getRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING));
		if (aaHint != nullptr && !$equals(aaHint, oldAAValue)) {
			g2->setRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING, aaHint);
		} else {
			$assign(oldAAValue, nullptr);
		}
		$var($Object, lcdContrastHint, c->getClientProperty($RenderingHints::KEY_TEXT_LCD_CONTRAST));
		if (lcdContrastHint != nullptr) {
			$assign(oldContrast, g2->getRenderingHint($RenderingHints::KEY_TEXT_LCD_CONTRAST));
			if ($of(lcdContrastHint)->equals(oldContrast)) {
				$assign(oldContrast, nullptr);
			} else {
				g2->setRenderingHint($RenderingHints::KEY_TEXT_LCD_CONTRAST, lcdContrastHint);
			}
		}
		g2->drawString($$new($String, data, offset, length), x, y);
		if (oldAAValue != nullptr) {
			g2->setRenderingHint($RenderingHints::KEY_TEXT_ANTIALIASING, oldAAValue);
		}
		if (oldContrast != nullptr) {
			g2->setRenderingHint($RenderingHints::KEY_TEXT_LCD_CONTRAST, oldContrast);
		}
	} else {
		$nc(g2)->drawString($$new($String, data, offset, length), x, y);
	}
	return nextX;
}

float SwingUtilities2::getFontCharWidth(char16_t c, $FontMetrics* fm, bool useFPAPI) {
	$init(SwingUtilities2);
	return getFontCharsWidth($$new($chars, {c}), 0, 1, fm, useFPAPI);
}

float SwingUtilities2::getFontCharsWidth($chars* data, int32_t offset, int32_t len, $FontMetrics* fm, bool useFPAPI) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		return (float)0;
	}
	if (useFPAPI) {
		$var($Rectangle2D, bounds, $nc($($nc(fm)->getFont()))->getStringBounds(data, offset, offset + len, $(fm->getFontRenderContext())));
		return (float)$nc(bounds)->getWidth();
	} else {
		return (float)$nc(fm)->charsWidth(data, offset, len);
	}
}

float SwingUtilities2::getFontStringWidth($String* data, $FontMetrics* fm, bool useFPAPI) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (useFPAPI) {
		$var($Rectangle2D, bounds, $nc($($nc(fm)->getFont()))->getStringBounds(data, $(fm->getFontRenderContext())));
		return (float)$nc(bounds)->getWidth();
	} else {
		return (float)$nc(fm)->stringWidth(data);
	}
}

float SwingUtilities2::drawString($JComponent* c, $Graphics* g, $AttributedCharacterIterator* iterator, int32_t x, int32_t y) {
	$init(SwingUtilities2);
	return drawStringImpl(c, g, iterator, (float)x, (float)y);
}

float SwingUtilities2::drawString($JComponent* c, $Graphics* g, $AttributedCharacterIterator* iterator, float x, float y) {
	$init(SwingUtilities2);
	return drawStringImpl(c, g, iterator, x, y);
}

float SwingUtilities2::drawStringImpl($JComponent* c, $Graphics* g, $AttributedCharacterIterator* iterator, float x, float y) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	float retVal = 0.0;
	bool isPrinting = SwingUtilities2::isPrinting(g);
	$var($Color, col, $nc(g)->getColor());
	if (isPrinting) {
		if ($instanceOf($PrintColorUIResource, col)) {
			g->setColor($($nc(($cast($PrintColorUIResource, col)))->getPrintColor()));
		}
	}
	$var($Graphics2D, g2d, getGraphics2D(g));
	if (g2d == nullptr) {
		g->drawString(iterator, $cast(int32_t, x), $cast(int32_t, y));
		retVal = x;
	} else {
		$var($FontRenderContext, frc, nullptr);
		if (isPrinting) {
			$assign(frc, getFontRenderContext(c));
			bool var$0 = $nc(frc)->isAntiAliased();
			if (var$0 || $nc(frc)->usesFractionalMetrics()) {
				$assign(frc, $new($FontRenderContext, $(frc->getTransform()), false, false));
			}
		} else if (($assign(frc, getFRCProperty(c))) != nullptr) {
		} else {
			$assign(frc, $nc(g2d)->getFontRenderContext());
		}
		$var($TextLayout, layout, nullptr);
		if (isPrinting) {
			$var($FontRenderContext, deviceFRC, $nc(g2d)->getFontRenderContext());
			if (!isFontRenderContextPrintCompatible(frc, deviceFRC)) {
				$assign(layout, $new($TextLayout, iterator, deviceFRC));
				$var($AttributedCharacterIterator, trimmedIt, getTrimmedTrailingSpacesIterator(iterator));
				if (trimmedIt != nullptr) {
					float screenWidth = $$new($TextLayout, trimmedIt, frc)->getAdvance();
					$assign(layout, layout->getJustifiedLayout(screenWidth));
				}
			} else {
				$assign(layout, $new($TextLayout, iterator, frc));
			}
		} else {
			$assign(layout, $new($TextLayout, iterator, frc));
		}
		$nc(layout)->draw(g2d, x, y);
		retVal = layout->getAdvance();
	}
	if (isPrinting) {
		g->setColor(col);
	}
	return retVal;
}

void SwingUtilities2::drawVLine($Graphics* g, int32_t x, int32_t y1, int32_t y2) {
	$init(SwingUtilities2);
	if (y2 < y1) {
		int32_t temp = y2;
		y2 = y1;
		y1 = temp;
	}
	$nc(g)->fillRect(x, y1, 1, y2 - y1 + 1);
}

void SwingUtilities2::drawHLine($Graphics* g, int32_t x1, int32_t x2, int32_t y) {
	$init(SwingUtilities2);
	if (x2 < x1) {
		int32_t temp = x2;
		x2 = x1;
		x1 = temp;
	}
	$nc(g)->fillRect(x1, y, x2 - x1 + 1, 1);
}

void SwingUtilities2::drawRect($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(SwingUtilities2);
	if (w < 0 || h < 0) {
		return;
	}
	if (h == 0 || w == 0) {
		$nc(g)->fillRect(x, y, w + 1, h + 1);
	} else {
		$nc(g)->fillRect(x, y, w, 1);
		g->fillRect(x + w, y, 1, h);
		g->fillRect(x + 1, y + h, w, 1);
		g->fillRect(x, y + 1, 1, h);
	}
}

$TextLayout* SwingUtilities2::createTextLayout($JComponent* c, $String* s, $Font* f, $FontRenderContext* frc) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$init($TextAttribute);
	$var($Object, shaper, c == nullptr ? ($Object*)nullptr : $nc(c)->getClientProperty($TextAttribute::NUMERIC_SHAPING));
	if (shaper == nullptr) {
		return $new($TextLayout, s, f, frc);
	} else {
		$var($Map, a, $new($HashMap));
		a->put($TextAttribute::FONT, f);
		a->put($TextAttribute::NUMERIC_SHAPING, shaper);
		return $new($TextLayout, s, a, frc);
	}
}

bool SwingUtilities2::isFontRenderContextPrintCompatible($FontRenderContext* frc1, $FontRenderContext* frc2) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (frc1 == frc2) {
		return true;
	}
	if (frc1 == nullptr || frc2 == nullptr) {
		return false;
	}
	if (!$equals($nc(frc1)->getFractionalMetricsHint(), $nc(frc2)->getFractionalMetricsHint())) {
		return false;
	}
	bool var$0 = !$nc(frc1)->isTransformed();
	if (var$0 && !$nc(frc2)->isTransformed()) {
		return true;
	}
	$var($doubles, mat1, $new($doubles, 4));
	$var($doubles, mat2, $new($doubles, 4));
	$nc($($nc(frc1)->getTransform()))->getMatrix(mat1);
	$nc($($nc(frc2)->getTransform()))->getMatrix(mat2);
	return mat1->get(0) == mat2->get(0) && mat1->get(1) == mat2->get(1) && mat1->get(2) == mat2->get(2) && mat1->get(3) == mat2->get(3);
}

$Graphics2D* SwingUtilities2::getGraphics2D($Graphics* g) {
	$init(SwingUtilities2);
	if ($instanceOf($Graphics2D, g)) {
		return $cast($Graphics2D, g);
	} else if ($instanceOf($ProxyPrintGraphics, g)) {
		return ($cast($Graphics2D, $nc(($cast($ProxyPrintGraphics, g)))->getGraphics()));
	} else {
		return nullptr;
	}
}

$FontRenderContext* SwingUtilities2::getFontRenderContext($Component* c) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (!SwingUtilities2::$assertionsDisabled && !(c != nullptr)) {
		$throwNew($AssertionError);
	}
	if (c == nullptr) {
		return SwingUtilities2::DEFAULT_FRC;
	} else {
		return $nc($($nc(c)->getFontMetrics($(c->getFont()))))->getFontRenderContext();
	}
}

$FontRenderContext* SwingUtilities2::getFontRenderContext($Component* c, $FontMetrics* fm) {
	$init(SwingUtilities2);
	if (!SwingUtilities2::$assertionsDisabled && !(fm != nullptr || c != nullptr)) {
		$throwNew($AssertionError);
	}
	return (fm != nullptr) ? $nc(fm)->getFontRenderContext() : getFontRenderContext(c);
}

$FontMetrics* SwingUtilities2::getFontMetrics($JComponent* c, $Font* font) {
	$init(SwingUtilities2);
	$var($FontRenderContext, frc, getFRCProperty(c));
	if (frc == nullptr) {
		$assign(frc, SwingUtilities2::DEFAULT_FRC);
	}
	return $FontDesignMetrics::getMetrics(font, frc);
}

$FontRenderContext* SwingUtilities2::getFRCProperty($JComponent* c) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (c != nullptr) {
		$var($GraphicsConfiguration, gc, c->getGraphicsConfiguration());
		$var($AffineTransform, tx, (gc == nullptr) ? ($AffineTransform*)nullptr : $nc(gc)->getDefaultTransform());
		$init($RenderingHints);
		$var($Object, aaHint, c->getClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING));
		return getFRCFromCache(tx, aaHint);
	}
	return nullptr;
}

$FontRenderContext* SwingUtilities2::getFRCFromCache($AffineTransform* tx, Object$* aaHint$renamed) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$var($Object, aaHint, aaHint$renamed);
	if (tx == nullptr && aaHint == nullptr) {
		return nullptr;
	}
	$var($Map, cache, $cast($Map, $nc($($AppContext::getAppContext()))->get(SwingUtilities2::APP_CONTEXT_FRC_CACHE_KEY)));
	if (cache == nullptr) {
		$assign(cache, $new($HashMap));
		$nc($($AppContext::getAppContext()))->put(SwingUtilities2::APP_CONTEXT_FRC_CACHE_KEY, cache);
	}
	$var($Object, key, (tx == nullptr) ? $of(aaHint) : (aaHint == nullptr ? $of(tx) : $of($new($SwingUtilities2$KeyPair, tx, aaHint))));
	$var($FontRenderContext, frc, $cast($FontRenderContext, $nc(cache)->get(key)));
	if (frc == nullptr) {
		$init($RenderingHints);
		$assign(aaHint, (aaHint == nullptr) ? $RenderingHints::VALUE_TEXT_ANTIALIAS_OFF : $of(aaHint));
		$assign(frc, $new($FontRenderContext, tx, aaHint, $RenderingHints::VALUE_FRACTIONALMETRICS_DEFAULT));
		cache->put(key, frc);
	}
	return frc;
}

bool SwingUtilities2::isPrinting($Graphics* g) {
	$init(SwingUtilities2);
	return ($instanceOf($PrinterGraphics, g) || $instanceOf($PrintGraphics, g));
}

$String* SwingUtilities2::trimTrailingSpaces($String* s) {
	$init(SwingUtilities2);
	int32_t i = $nc(s)->length() - 1;
	while (i >= 0 && $Character::isWhitespace(s->charAt(i))) {
		--i;
	}
	return s->substring(0, i + 1);
}

$AttributedCharacterIterator* SwingUtilities2::getTrimmedTrailingSpacesIterator($AttributedCharacterIterator* iterator) {
	$init(SwingUtilities2);
	int32_t curIdx = $nc(iterator)->getIndex();
	char16_t c = iterator->last();
	while (c != $CharacterIterator::DONE && $Character::isWhitespace(c)) {
		c = iterator->previous();
	}
	if (c != $CharacterIterator::DONE) {
		int32_t endIdx = iterator->getIndex();
		if (endIdx == iterator->getEndIndex() - 1) {
			iterator->setIndex(curIdx);
			return iterator;
		} else {
			$var($AttributedString, trimmedText, $new($AttributedString, iterator, iterator->getBeginIndex(), endIdx + 1));
			return trimmedText->getIterator();
		}
	} else {
		return nullptr;
	}
}

bool SwingUtilities2::useSelectedTextColor($Highlighter$Highlight* h, $JTextComponent* c) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$var($Highlighter$HighlightPainter, painter, $nc(h)->getPainter());
	$var($String, painterClass, $nc($of(painter))->getClass()->getName());
	bool var$0 = $nc(painterClass)->indexOf("javax.swing.text.DefaultHighlighter"_s) != 0;
	if (var$0 && painterClass->indexOf("com.sun.java.swing.plaf.windows.WindowsTextUI"_s) != 0) {
		return false;
	}
	try {
		$var($DefaultHighlighter$DefaultHighlightPainter, defPainter, $cast($DefaultHighlighter$DefaultHighlightPainter, painter));
		bool var$1 = defPainter->getColor() != nullptr;
		if (var$1 && !$nc($(defPainter->getColor()))->equals($($nc(c)->getSelectionColor()))) {
			return false;
		}
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		return false;
	}
	return true;
}

bool SwingUtilities2::canAccessSystemClipboard() {
	$init(SwingUtilities2);
	bool canAccess = false;
	if (!$GraphicsEnvironment::isHeadless()) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm == nullptr) {
			canAccess = true;
		} else {
			try {
				$init($AWTPermissions);
				$nc(sm)->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
				canAccess = true;
			} catch ($SecurityException&) {
				$catch();
			}
			if (canAccess && !isTrustedContext()) {
				canAccess = canCurrentEventAccessSystemClipboard(true);
			}
		}
	}
	return canAccess;
}

bool SwingUtilities2::canCurrentEventAccessSystemClipboard() {
	$init(SwingUtilities2);
	bool var$0 = isTrustedContext();
	return var$0 || canCurrentEventAccessSystemClipboard(false);
}

bool SwingUtilities2::canEventAccessSystemClipboard($AWTEvent* e) {
	$init(SwingUtilities2);
	bool var$0 = isTrustedContext();
	return var$0 || canEventAccessSystemClipboard(e, false);
}

bool SwingUtilities2::isAccessClipboardGesture($InputEvent* ie) {
	$init(SwingUtilities2);
	bool allowedGesture = false;
	if ($instanceOf($KeyEvent, ie)) {
		$var($KeyEvent, ke, $cast($KeyEvent, ie));
		int32_t keyCode = $nc(ke)->getKeyCode();
		int32_t keyModifiers = ke->getModifiers();
		switch (keyCode) {
		case $KeyEvent::VK_C:
			{}
		case $KeyEvent::VK_V:
			{}
		case $KeyEvent::VK_X:
			{
				allowedGesture = (keyModifiers == $InputEvent::CTRL_MASK);
				break;
			}
		case $KeyEvent::VK_INSERT:
			{
				allowedGesture = (keyModifiers == $InputEvent::CTRL_MASK || keyModifiers == $InputEvent::SHIFT_MASK);
				break;
			}
		case $KeyEvent::VK_COPY:
			{}
		case $KeyEvent::VK_PASTE:
			{}
		case $KeyEvent::VK_CUT:
			{
				allowedGesture = true;
				break;
			}
		case $KeyEvent::VK_DELETE:
			{
				allowedGesture = (keyModifiers == $InputEvent::SHIFT_MASK);
				break;
			}
		}
	}
	return allowedGesture;
}

bool SwingUtilities2::canEventAccessSystemClipboard($AWTEvent* e, bool checkGesture) {
	$init(SwingUtilities2);
	if ($EventQueue::isDispatchThread()) {
		if ($instanceOf($InputEvent, e) && (!checkGesture || isAccessClipboardGesture($cast($InputEvent, e)))) {
			return $nc($($AWTAccessor::getInputEventAccessor()))->canAccessSystemClipboard($cast($InputEvent, e));
		} else {
			return false;
		}
	} else {
		return true;
	}
}

void SwingUtilities2::checkAccess(int32_t modifiers) {
	$init(SwingUtilities2);
	bool var$0 = $System::getSecurityManager() != nullptr;
	if (var$0 && !$Modifier::isPublic(modifiers)) {
		$throwNew($SecurityException, "Resource is not accessible"_s);
	}
}

bool SwingUtilities2::canCurrentEventAccessSystemClipboard(bool checkGesture) {
	$init(SwingUtilities2);
	$var($AWTEvent, event, $EventQueue::getCurrentEvent());
	return canEventAccessSystemClipboard(event, checkGesture);
}

bool SwingUtilities2::isTrustedContext() {
	$init(SwingUtilities2);
	bool var$0 = ($System::getSecurityManager() == nullptr);
	return var$0 || ($nc($($AppContext::getAppContext()))->get(SwingUtilities2::UntrustedClipboardAccess) == nullptr);
}

$String* SwingUtilities2::displayPropertiesToCSS($Font* font, $Color* fg) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, rule, $new($StringBuilder, "body {"_s));
	if (font != nullptr) {
		rule->append(" font-family: "_s);
		rule->append($(font->getFamily()));
		rule->append(" ; "_s);
		rule->append(" font-size: "_s);
		rule->append(font->getSize());
		rule->append("pt ;"_s);
		if (font->isBold()) {
			rule->append(" font-weight: 700 ; "_s);
		}
		if (font->isItalic()) {
			rule->append(" font-style: italic ; "_s);
		}
	}
	if (fg != nullptr) {
		rule->append(" color: #"_s);
		if (fg->getRed() < 16) {
			rule->append(u'0');
		}
		rule->append($($Integer::toHexString(fg->getRed())));
		if (fg->getGreen() < 16) {
			rule->append(u'0');
		}
		rule->append($($Integer::toHexString(fg->getGreen())));
		if (fg->getBlue() < 16) {
			rule->append(u'0');
		}
		rule->append($($Integer::toHexString(fg->getBlue())));
		rule->append(" ; "_s);
	}
	rule->append(" }"_s);
	return rule->toString();
}

$Object* SwingUtilities2::makeIcon($Class* baseClass, $Class* rootClass, $String* imageFile) {
	$init(SwingUtilities2);
	return $of(makeIcon(baseClass, rootClass, imageFile, true));
}

$Object* SwingUtilities2::makeIcon_Unprivileged($Class* baseClass, $Class* rootClass, $String* imageFile) {
	$init(SwingUtilities2);
	return $of(makeIcon(baseClass, rootClass, imageFile, false));
}

$Object* SwingUtilities2::makeIcon($Class* baseClass, $Class* rootClass, $String* imageFile, bool enablePrivileges) {
	$init(SwingUtilities2);
	return $of(static_cast<$UIDefaults$LazyValue*>($new(SwingUtilities2$$Lambda$lambda$makeIcon$1, enablePrivileges, baseClass, rootClass, imageFile)));
}

$bytes* SwingUtilities2::getIconBytes($Class* baseClass, $Class* rootClass, $String* imageFile) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* srchClass = baseClass;
	while (srchClass != nullptr) {
		try {
			$var($InputStream, resource, srchClass->getResourceAsStream(imageFile));
			{
				$var($Throwable, var$0, nullptr);
				$var($bytes, var$2, nullptr);
				bool return$1 = false;
				bool break$3 = false;
				bool continue$4 = false;
				try {
					try {
						if (resource == nullptr) {
							if (srchClass == rootClass) {
								// break;
								break$3 = true;
								goto $finally;
							}
							srchClass = srchClass->getSuperclass();
							// continue;
							continue$4 = true;
							goto $finally;
						}
						{
							$var($BufferedInputStream, in, $new($BufferedInputStream, resource));
							{
								$var($Throwable, var$5, nullptr);
								$var($bytes, var$7, nullptr);
								bool return$6 = false;
								try {
									try {
										$assign(var$7, in->readAllBytes());
										return$6 = true;
										goto $finally1;
									} catch ($Throwable&) {
										$var($Throwable, t$, $catch());
										try {
											in->close();
										} catch ($Throwable&) {
											$var($Throwable, x2, $catch());
											t$->addSuppressed(x2);
										}
										$throw(t$);
									}
								} catch ($Throwable&) {
									$assign(var$5, $catch());
								} $finally1: {
									in->close();
								}
								if (var$5 != nullptr) {
									$throw(var$5);
								}
								if (return$6) {
									$assign(var$2, var$7);
									return$1 = true;
									goto $finally;
								}
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (resource != nullptr) {
							try {
								resource->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					if (resource != nullptr) {
						resource->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (break$3) {
					break;
				}
				if (continue$4) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
			$init($System);
			$nc($System::err)->println($(ioe->toString()));
		}
	}
	return nullptr;
}

bool SwingUtilities2::isLocalDisplay() {
	$init(SwingUtilities2);
	bool isLocal = false;
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	if ($instanceOf($SunGraphicsEnvironment, ge)) {
		isLocal = $nc(($cast($SunGraphicsEnvironment, ge)))->isDisplayLocal();
	} else {
		isLocal = true;
	}
	return isLocal;
}

int32_t SwingUtilities2::getUIDefaultsInt(Object$* key) {
	$init(SwingUtilities2);
	return getUIDefaultsInt(key, 0);
}

int32_t SwingUtilities2::getUIDefaultsInt(Object$* key, $Locale* l) {
	$init(SwingUtilities2);
	return getUIDefaultsInt(key, l, 0);
}

int32_t SwingUtilities2::getUIDefaultsInt(Object$* key, int32_t defaultValue) {
	$init(SwingUtilities2);
	return getUIDefaultsInt(key, nullptr, defaultValue);
}

int32_t SwingUtilities2::getUIDefaultsInt(Object$* key, $Locale* l, int32_t defaultValue) {
	$init(SwingUtilities2);
	$var($Object, value, $UIManager::get(key, l));
	if ($instanceOf($Integer, value)) {
		return $nc(($cast($Integer, value)))->intValue();
	}
	if ($instanceOf($String, value)) {
		try {
			return $Integer::parseInt($cast($String, value));
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	return defaultValue;
}

$Component* SwingUtilities2::compositeRequestFocus($Component* component) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Container, component)) {
		$var($Container, container, $cast($Container, component));
		if ($nc(container)->isFocusCycleRoot()) {
			$var($FocusTraversalPolicy, policy, container->getFocusTraversalPolicy());
			$var($Component, comp, $nc(policy)->getDefaultComponent(container));
			if (comp != nullptr) {
				comp->requestFocus();
				return comp;
			}
		}
		$var($Container, rootAncestor, $nc(container)->getFocusCycleRootAncestor());
		if (rootAncestor != nullptr) {
			$var($FocusTraversalPolicy, policy, rootAncestor->getFocusTraversalPolicy());
			$var($Component, comp, $nc(policy)->getComponentAfter(rootAncestor, container));
			if (comp != nullptr && $SwingUtilities::isDescendingFrom(comp, container)) {
				comp->requestFocus();
				return comp;
			}
		}
	}
	if ($nc(component)->isFocusable()) {
		component->requestFocus();
		return component;
	}
	return nullptr;
}

bool SwingUtilities2::tabbedPaneChangeFocusTo($Component* comp) {
	$init(SwingUtilities2);
	if (comp != nullptr) {
		if (comp->isFocusTraversable()) {
			SwingUtilities2::compositeRequestFocus(comp);
			return true;
		} else if ($instanceOf($JComponent, comp) && $nc(($cast($JComponent, comp)))->requestDefaultFocus()) {
			return true;
		}
	}
	return false;
}

$Future* SwingUtilities2::submit($Callable* task) {
	$init(SwingUtilities2);
	if (task == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($FutureTask, future, $new($FutureTask, task));
	execute(future);
	return future;
}

$Future* SwingUtilities2::submit($Runnable* task, Object$* result) {
	$init(SwingUtilities2);
	if (task == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($FutureTask, future, $new($FutureTask, task, result));
	execute(future);
	return future;
}

void SwingUtilities2::execute($Runnable* command) {
	$init(SwingUtilities2);
	$SwingUtilities::invokeLater(command);
}

void SwingUtilities2::setSkipClickCount($Component* comp, int32_t count) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JTextComponent, comp) && $instanceOf($DefaultCaret, $($nc(($cast($JTextComponent, comp)))->getCaret()))) {
		($cast($JTextComponent, comp))->putClientProperty(SwingUtilities2::SKIP_CLICK_COUNT, $($Integer::valueOf(count)));
	}
}

int32_t SwingUtilities2::getAdjustedClickCount($JTextComponent* comp, $MouseEvent* e) {
	$init(SwingUtilities2);
	int32_t cc = $nc(e)->getClickCount();
	if (cc == 1) {
		$nc(comp)->putClientProperty(SwingUtilities2::SKIP_CLICK_COUNT, nullptr);
	} else {
		$var($Integer, sub, $cast($Integer, $nc(comp)->getClientProperty(SwingUtilities2::SKIP_CLICK_COUNT)));
		if (sub != nullptr) {
			return cc - sub->intValue();
		}
	}
	return cc;
}

$SwingUtilities2$Section* SwingUtilities2::liesIn($Rectangle* rect, $Point* p, bool horizontal, bool ltr, bool three) {
	$init(SwingUtilities2);
	int32_t p0 = 0;
	int32_t pComp = 0;
	int32_t length = 0;
	bool forward = false;
	if (horizontal) {
		p0 = $nc(rect)->x;
		pComp = $nc(p)->x;
		length = rect->width;
		forward = ltr;
	} else {
		p0 = $nc(rect)->y;
		pComp = $nc(p)->y;
		length = rect->height;
		forward = true;
	}
	if (three) {
		int32_t boundary = (length >= 30) ? 10 : length / 3;
		if (pComp < p0 + boundary) {
			$init($SwingUtilities2$Section);
			return forward ? $SwingUtilities2$Section::LEADING : $SwingUtilities2$Section::TRAILING;
		} else if (pComp >= p0 + length - boundary) {
			$init($SwingUtilities2$Section);
			return forward ? $SwingUtilities2$Section::TRAILING : $SwingUtilities2$Section::LEADING;
		}
		$init($SwingUtilities2$Section);
		return $SwingUtilities2$Section::MIDDLE;
	} else {
		int32_t middle = p0 + length / 2;
		if (forward) {
			$init($SwingUtilities2$Section);
			return pComp >= middle ? $SwingUtilities2$Section::TRAILING : $SwingUtilities2$Section::LEADING;
		} else {
			$init($SwingUtilities2$Section);
			return pComp < middle ? $SwingUtilities2$Section::TRAILING : $SwingUtilities2$Section::LEADING;
		}
	}
}

$SwingUtilities2$Section* SwingUtilities2::liesInHorizontal($Rectangle* rect, $Point* p, bool ltr, bool three) {
	$init(SwingUtilities2);
	return liesIn(rect, p, true, ltr, three);
}

$SwingUtilities2$Section* SwingUtilities2::liesInVertical($Rectangle* rect, $Point* p, bool three) {
	$init(SwingUtilities2);
	return liesIn(rect, p, false, false, three);
}

int32_t SwingUtilities2::convertColumnIndexToModel($TableColumnModel* cm, int32_t viewColumnIndex) {
	$init(SwingUtilities2);
	if (viewColumnIndex < 0) {
		return viewColumnIndex;
	}
	return $nc($($nc(cm)->getColumn(viewColumnIndex)))->getModelIndex();
}

int32_t SwingUtilities2::convertColumnIndexToView($TableColumnModel* cm, int32_t modelColumnIndex) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if (modelColumnIndex < 0) {
		return modelColumnIndex;
	}
	for (int32_t column = 0; column < $nc(cm)->getColumnCount(); ++column) {
		if ($nc($(cm->getColumn(column)))->getModelIndex() == modelColumnIndex) {
			return column;
		}
	}
	return -1;
}

int32_t SwingUtilities2::setAltGraphMask(int32_t modifier) {
	$init(SwingUtilities2);
	return (modifier | $InputEvent::ALT_GRAPH_DOWN_MASK);
}

int32_t SwingUtilities2::getSystemMnemonicKeyMask() {
	$init(SwingUtilities2);
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, toolkit)) {
		return $nc(($cast($SunToolkit, toolkit)))->getFocusAcceleratorKeyMask();
	}
	return $InputEvent::ALT_MASK;
}

$TreePath* SwingUtilities2::getTreePath($TreeModelEvent* event, $TreeModel* model) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$var($TreePath, path, $nc(event)->getTreePath());
	if ((path == nullptr) && (model != nullptr)) {
		$var($Object, root, model->getRoot());
		if (root != nullptr) {
			$assign(path, $new($TreePath, root));
		}
	}
	return path;
}

bool SwingUtilities2::isScaledGraphics($Graphics* g) {
	$init(SwingUtilities2);
	if ($instanceOf($Graphics2D, g)) {
		$var($AffineTransform, tx, $nc(($cast($Graphics2D, g)))->getTransform());
		return ((int32_t)($nc(tx)->getType() & (uint32_t)~(1 | 64))) != 0;
	}
	return false;
}

$Object* SwingUtilities2::getAndSetAntialisingHintForScaledGraphics($Graphics* g) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	bool var$0 = isScaledGraphics(g);
	if (var$0 && isLocalDisplay()) {
		$var($Graphics2D, g2d, $cast($Graphics2D, g));
		$init($RenderingHints);
		$var($Object, hint, $nc(g2d)->getRenderingHint($RenderingHints::KEY_ANTIALIASING));
		g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
		return $of(hint);
	}
	return $of(nullptr);
}

void SwingUtilities2::setAntialiasingHintForScaledGraphics($Graphics* g, Object$* hint) {
	$init(SwingUtilities2);
	if (hint != nullptr) {
		$init($RenderingHints);
		$nc(($cast($Graphics2D, g)))->setRenderingHint($RenderingHints::KEY_ANTIALIASING, hint);
	}
}

bool SwingUtilities2::isFloatingPointScale($AffineTransform* tx) {
	$init(SwingUtilities2);
	int32_t type = (int32_t)($nc(tx)->getType() & (uint32_t)~(64 | 1));
	if (type == 0) {
		return false;
	} else if (((int32_t)(type & (uint32_t)~6)) == 0) {
		double scaleX = tx->getScaleX();
		double scaleY = tx->getScaleY();
		return (scaleX != $cast(int32_t, scaleX)) || (scaleY != $cast(int32_t, scaleY));
	} else {
		return false;
	}
}

bool SwingUtilities2::getBoolean($JComponent* component, $String* key) {
	$init(SwingUtilities2);
	$var($Object, clientProperty, $nc(component)->getClientProperty(key));
	if ($instanceOf($Boolean, clientProperty)) {
		$init($Boolean);
		return $nc($Boolean::TRUE)->equals(clientProperty);
	}
	return $UIManager::getBoolean(key);
}

bool SwingUtilities2::isScaleChanged($PropertyChangeEvent* ev) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(ev)->getPropertyName());
	$var($Object, var$1, ev->getOldValue());
	return isScaleChanged(var$0, var$1, $(ev->getNewValue()));
}

bool SwingUtilities2::isScaleChanged($String* name, Object$* oldValue, Object$* newValue) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	if ($equals(oldValue, newValue) || !"graphicsConfiguration"_s->equals(name)) {
		return false;
	}
	$var($GraphicsConfiguration, newGC, $cast($GraphicsConfiguration, oldValue));
	$var($GraphicsConfiguration, oldGC, $cast($GraphicsConfiguration, newValue));
	$var($AffineTransform, newTx, newGC != nullptr ? $nc(newGC)->getDefaultTransform() : ($AffineTransform*)nullptr);
	$var($AffineTransform, oldTx, oldGC != nullptr ? $nc(oldGC)->getDefaultTransform() : ($AffineTransform*)nullptr);
	return !$Objects::equals(newTx, oldTx);
}

$Object* SwingUtilities2::lambda$makeIcon$1(bool enablePrivileges, $Class* baseClass, $Class* rootClass, $String* imageFile, $UIDefaults* table) {
	$init(SwingUtilities2);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($bytes, buffer, enablePrivileges ? $cast($bytes, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SwingUtilities2$$Lambda$lambda$makeIcon$0$1, baseClass, rootClass, imageFile)))) : getIconBytes(baseClass, rootClass, imageFile));
	if (buffer == nullptr) {
		return $of(nullptr);
	}
	if ($nc(buffer)->length == 0) {
		$init($System);
		$nc($System::err)->println($$str({"warning: "_s, imageFile, " is zero-length"_s}));
		return $of(nullptr);
	}
	return $of($new($ImageIconUIResource, buffer));
}

$bytes* SwingUtilities2::lambda$makeIcon$0($Class* baseClass, $Class* rootClass, $String* imageFile) {
	$init(SwingUtilities2);
	return getIconBytes(baseClass, rootClass, imageFile);
}

void clinit$SwingUtilities2($Class* class$) {
	$assignStatic(SwingUtilities2::IMPLIED_CR, "CR"_s);
	$assignStatic(SwingUtilities2::UntrustedClipboardAccess, "UNTRUSTED_CLIPBOARD_ACCESS_KEY"_s);
	SwingUtilities2::$assertionsDisabled = !SwingUtilities2::class$->desiredAssertionStatus();
	$assignStatic(SwingUtilities2::LAF_STATE_KEY, $new($StringBuffer, "LookAndFeel State"_s));
	$assignStatic(SwingUtilities2::MENU_SELECTION_MANAGER_LISTENER_KEY, $new($StringBuffer, "MenuSelectionManager listener key"_s));
	$assignStatic(SwingUtilities2::DEFAULT_FRC, $new($FontRenderContext, ($AffineTransform*)nullptr, false, false));
	$assignStatic(SwingUtilities2::SKIP_CLICK_COUNT, $new($StringBuilder, "skipClickCount"_s));
	$assignStatic(SwingUtilities2::BASICMENUITEMUI_MAX_TEXT_OFFSET, $new($StringUIClientPropertyKey, "maxTextOffset"_s));
	$assignStatic(SwingUtilities2::charsBufferLock, $new($Object));
	$assignStatic(SwingUtilities2::charsBuffer, $new($chars, SwingUtilities2::CHAR_BUFFER_SIZE));
	{
		$assignStatic(SwingUtilities2::fontCache, $new($SwingUtilities2$LSBCacheEntryArray, SwingUtilities2::CACHE_SIZE));
	}
	$assignStatic(SwingUtilities2::APP_CONTEXT_FRC_CACHE_KEY, $new($Object));
}

SwingUtilities2::SwingUtilities2() {
}

$Class* SwingUtilities2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SwingUtilities2$$Lambda$lambda$makeIcon$1::classInfo$.name)) {
			return SwingUtilities2$$Lambda$lambda$makeIcon$1::load$(name, initialize);
		}
		if (name->equals(SwingUtilities2$$Lambda$lambda$makeIcon$0$1::classInfo$.name)) {
			return SwingUtilities2$$Lambda$lambda$makeIcon$0$1::load$(name, initialize);
		}
	}
	$loadClass(SwingUtilities2, name, initialize, &_SwingUtilities2_ClassInfo_, clinit$SwingUtilities2, allocate$SwingUtilities2);
	return class$;
}

$Class* SwingUtilities2::class$ = nullptr;

	} // swing
} // sun