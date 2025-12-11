#include <com/sun/java/swing/plaf/gtk/Metacity.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ArrowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ShadowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <com/sun/java/swing/plaf/gtk/Metacity$1.h>
#include <com/sun/java/swing/plaf/gtk/Metacity$ArithmeticExpressionEvaluator.h>
#include <com/sun/java/swing/plaf/gtk/Metacity$ColorizeImageFilter.h>
#include <com/sun/java/swing/plaf/gtk/Metacity$Privileged.h>
#include <com/sun/java/swing/plaf/gtk/Metacity$RoundRectClipShape.h>
#include <com/sun/java/swing/plaf/gtk/Metacity$TitlePaneLayout.h>
#include <com/sun/java/swing/plaf/gtk/XColors.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Composite.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Paint.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/SAXException.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BOTTOM_LEFT
#undef BOTTOM_RIGHT
#undef DARK
#undef DISABLED
#undef DOWN
#undef ELEMENT_NODE
#undef ENABLED
#undef ETCHED_IN
#undef ETCHED_OUT
#undef FOREGROUND
#undef GET_IMAGE
#undef GET_THEME_DIR
#undef GET_USER_THEME
#undef IN
#undef INSTANCE
#undef LEFT
#undef LIGHT
#undef MOUSE_OVER
#undef NONE
#undef OUT
#undef PRESSED
#undef RIGHT
#undef SELECTED
#undef SRC_OVER
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND
#undef TOP_LEFT
#undef TOP_RIGHT
#undef UP

using $ColorArray = $Array<::java::awt::Color>;
using $NodeArray = $Array<::org::w3c::dom::Node>;
using $GTKColorType = ::com::sun::java::swing::plaf::gtk::GTKColorType;
using $GTKConstants$ArrowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType;
using $GTKConstants$ShadowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $Metacity$1 = ::com::sun::java::swing::plaf::gtk::Metacity$1;
using $Metacity$ArithmeticExpressionEvaluator = ::com::sun::java::swing::plaf::gtk::Metacity$ArithmeticExpressionEvaluator;
using $Metacity$ColorizeImageFilter = ::com::sun::java::swing::plaf::gtk::Metacity$ColorizeImageFilter;
using $Metacity$Privileged = ::com::sun::java::swing::plaf::gtk::Metacity$Privileged;
using $Metacity$RoundRectClipShape = ::com::sun::java::swing::plaf::gtk::Metacity$RoundRectClipShape;
using $Metacity$TitlePaneLayout = ::com::sun::java::swing::plaf::gtk::Metacity$TitlePaneLayout;
using $XColors = ::com::sun::java::swing::plaf::gtk::XColors;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Paint = ::java::awt::Paint;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $SAXException = ::org::xml::sax::SAXException;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Metacity, $assertionsDisabled)},
	{"INSTANCE", "Lcom/sun/java/swing/plaf/gtk/Metacity;", nullptr, $STATIC, $staticField(Metacity, INSTANCE)},
	{"themeNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity, themeNames)},
	{"errorLogged", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Metacity, errorLogged)},
	{"documentBuilder", "Ljavax/xml/parsers/DocumentBuilder;", nullptr, $PRIVATE | $STATIC, $staticField(Metacity, documentBuilder)},
	{"xmlDoc", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE | $STATIC, $staticField(Metacity, xmlDoc)},
	{"userHome", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Metacity, userHome)},
	{"frame_style_set", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(Metacity, frame_style_set)},
	{"frameGeometry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(Metacity, frameGeometry)},
	{"frameGeometries", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;>;", $PRIVATE, $field(Metacity, frameGeometries)},
	{"titlePaneLayout", "Ljava/awt/LayoutManager;", nullptr, $PRIVATE, $field(Metacity, titlePaneLayout)},
	{"imageFilter", "Lcom/sun/java/swing/plaf/gtk/Metacity$ColorizeImageFilter;", nullptr, $PRIVATE, $field(Metacity, imageFilter)},
	{"themeDir", "Ljava/net/URL;", nullptr, $PRIVATE, $field(Metacity, themeDir)},
	{"context", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(Metacity, context)},
	{"themeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Metacity, themeName)},
	{"aee", "Lcom/sun/java/swing/plaf/gtk/Metacity$ArithmeticExpressionEvaluator;", nullptr, $PRIVATE, $field(Metacity, aee)},
	{"variables", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(Metacity, variables)},
	{"roundedClipShape", "Lcom/sun/java/swing/plaf/gtk/Metacity$RoundRectClipShape;", nullptr, $PRIVATE, $field(Metacity, roundedClipShape)},
	{"images", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/awt/Image;>;", $PRIVATE, $field(Metacity, images)},
	{}
};

$MethodInfo _Metacity_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Metacity::*)($String*)>(&Metacity::init$)), "java.io.IOException,javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXException"},
	{"calculateButtonSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"calculateTitleArea", "(Ljavax/swing/JInternalFrame;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"calculateTitleTextWidth", "(Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;)I", nullptr, $PROTECTED},
	{"draw", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"drawArc", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawButton", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Ljava/awt/Graphics;IILjavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"drawGTKArrow", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawGTKBox", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawGTKVLine", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawGradient", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawIcon", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"drawImage", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawInclude", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"drawLine", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawPiece", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;Ljava/lang/String;IIIILjavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"drawRectangle", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawTile", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"drawTint", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"drawTitle", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"findChild", "(Ljavax/swing/JComponent;Ljava/lang/String;)Ljavax/swing/JComponent;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JComponent*(*)($JComponent*,$String*)>(&Metacity::findChild))},
	{"findInternalFrame", "(Ljava/awt/Component;)Ljavax/swing/JInternalFrame;", nullptr, 0},
	{"getBoolean", "(Ljava/lang/String;Z)Z", nullptr, $PROTECTED},
	{"getBooleanAttr", "(Lorg/w3c/dom/Node;Ljava/lang/String;Z)Z", nullptr, $PROTECTED},
	{"getBorderInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, 0},
	{"getFloatAttr", "(Lorg/w3c/dom/Node;Ljava/lang/String;F)F", nullptr, $PROTECTED},
	{"getFrameGeometry", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED},
	{"getImage", "(Ljava/lang/String;Ljava/awt/Color;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getInt", "(Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"getIntAttr", "(Lorg/w3c/dom/Node;Ljava/lang/String;I)I", nullptr, $PROTECTED},
	{"getNode", "(Ljava/lang/String;[Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PROTECTED},
	{"getNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;[Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PROTECTED},
	{"getNode", "(Lorg/w3c/dom/NodeList;Ljava/lang/String;[Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PROTECTED},
	{"getNodesByName", "(Lorg/w3c/dom/Node;Ljava/lang/String;)[Lorg/w3c/dom/Node;", nullptr, $PROTECTED},
	{"getRoundedClipShape", "(IIIIIII)Ljava/awt/Shape;", nullptr, $PRIVATE, $method(static_cast<$Shape*(Metacity::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&Metacity::getRoundedClipShape))},
	{"getStringAttr", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getStringAttr", "(Lorg/w3c/dom/NamedNodeMap;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getThemeDir", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)($String*)>(&Metacity::getThemeDir))},
	{"getTitlePaneLayout", "()Ljava/awt/LayoutManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LayoutManager*(*)()>(&Metacity::getTitlePaneLayout))},
	{"getUserTheme", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&Metacity::getUserTheme))},
	{"getXMLDoc", "(Ljava/net/URL;)Lorg/w3c/dom/Document;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Document*(*)($URL*)>(&Metacity::getXMLDoc)), "java.io.IOException,javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXException"},
	{"logError", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($String*,$Exception*)>(&Metacity::logError))},
	{"logError", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&Metacity::logError))},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, 0},
	{"paintFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, 0},
	{"parseColor", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"parseColor2", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"parseColorString", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Color*(*)($String*)>(&Metacity::parseColorString))},
	{"setClip", "(Lorg/w3c/dom/Node;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"setFrameGeometry", "(Ljavax/swing/JComponent;Ljava/util/Map;)V", "(Ljavax/swing/JComponent;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PROTECTED},
	{"tileImage", "(Ljava/awt/Graphics;Ljava/awt/Image;IIII[F)V", nullptr, $PROTECTED},
	{"updateFrameGeometry", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PRIVATE, $method(static_cast<void(Metacity::*)($SynthContext*)>(&Metacity::updateFrameGeometry))},
	{}
};

$InnerClassInfo _Metacity_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape", "com.sun.java.swing.plaf.gtk.Metacity", "RoundRectClipShape", $STATIC},
	{"com.sun.java.swing.plaf.gtk.Metacity$PeekableStringTokenizer", "com.sun.java.swing.plaf.gtk.Metacity", "PeekableStringTokenizer", $STATIC},
	{"com.sun.java.swing.plaf.gtk.Metacity$ArithmeticExpressionEvaluator", "com.sun.java.swing.plaf.gtk.Metacity", "ArithmeticExpressionEvaluator", 0},
	{"com.sun.java.swing.plaf.gtk.Metacity$TitlePaneLayout", "com.sun.java.swing.plaf.gtk.Metacity", "TitlePaneLayout", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.Metacity$ColorizeImageFilter", "com.sun.java.swing.plaf.gtk.Metacity", "ColorizeImageFilter", $PRIVATE},
	{"com.sun.java.swing.plaf.gtk.Metacity$Privileged", "com.sun.java.swing.plaf.gtk.Metacity", "Privileged", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.Metacity$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Metacity_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity",
	"java.lang.Object",
	"javax.swing.plaf.synth.SynthConstants",
	_Metacity_FieldInfo_,
	_Metacity_MethodInfo_,
	nullptr,
	nullptr,
	_Metacity_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape,com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape$RoundishRectIterator,com.sun.java.swing.plaf.gtk.Metacity$PeekableStringTokenizer,com.sun.java.swing.plaf.gtk.Metacity$ArithmeticExpressionEvaluator,com.sun.java.swing.plaf.gtk.Metacity$TitlePaneLayout,com.sun.java.swing.plaf.gtk.Metacity$ColorizeImageFilter,com.sun.java.swing.plaf.gtk.Metacity$Privileged,com.sun.java.swing.plaf.gtk.Metacity$1"
};

$Object* allocate$Metacity($Class* clazz) {
	return $of($alloc(Metacity));
}

bool Metacity::$assertionsDisabled = false;
Metacity* Metacity::INSTANCE = nullptr;
$StringArray* Metacity::themeNames = nullptr;
bool Metacity::errorLogged = false;
$DocumentBuilder* Metacity::documentBuilder = nullptr;
$Document* Metacity::xmlDoc = nullptr;
$String* Metacity::userHome = nullptr;

void Metacity::init$($String* themeName) {
	$useLocalCurrentObjectStackCache();
	$set(this, titlePaneLayout, $new($Metacity$TitlePaneLayout, this));
	$set(this, imageFilter, $new($Metacity$ColorizeImageFilter, this));
	$set(this, themeDir, nullptr);
	$set(this, aee, $new($Metacity$ArithmeticExpressionEvaluator, this));
	$set(this, images, $new($HashMap));
	$set(this, themeName, themeName);
	$set(this, themeDir, getThemeDir(themeName));
	if (this->themeDir != nullptr) {
		$var($URL, themeURL, $new($URL, this->themeDir, "metacity-theme-1.xml"_s));
		$assignStatic(Metacity::xmlDoc, getXMLDoc(themeURL));
		if (Metacity::xmlDoc == nullptr) {
			$throwNew($IOException, $(themeURL->toString()));
		}
	} else {
		$throwNew($FileNotFoundException, themeName);
	}
	$set(this, variables, $new($HashMap));
	$var($NodeList, nodes, $nc(Metacity::xmlDoc)->getElementsByTagName("constant"_s));
	int32_t n = $nc(nodes)->getLength();
	for (int32_t i = 0; i < n; ++i) {
		$var($Node, node, nodes->item(i));
		$var($String, name, getStringAttr(node, "name"_s));
		if (name != nullptr) {
			$var($String, value, getStringAttr(node, "value"_s));
			if (value != nullptr) {
				try {
					$nc(this->variables)->put(name, $($Integer::valueOf($Integer::parseInt(value))));
				} catch ($NumberFormatException& ex) {
					logError(themeName, static_cast<$Exception*>(ex));
				}
			}
		}
	}
	$set(this, frameGeometries, $new($HashMap));
	$assign(nodes, $nc(Metacity::xmlDoc)->getElementsByTagName("frame_geometry"_s));
	n = nodes->getLength();
	for (int32_t i = 0; i < n; ++i) {
		$var($Node, node, nodes->item(i));
		$var($String, name, getStringAttr(node, "name"_s));
		if (name != nullptr) {
			$var($HashMap, gm, $new($HashMap));
			$nc(this->frameGeometries)->put(name, gm);
			$var($String, parentGM, getStringAttr(node, "parent"_s));
			if (parentGM != nullptr) {
				gm->putAll($cast($Map, $($nc(this->frameGeometries)->get(parentGM))));
			}
			gm->put("has_title"_s, $($Boolean::valueOf(getBooleanAttr(node, "has_title"_s, true))));
			gm->put("rounded_top_left"_s, $($Boolean::valueOf(getBooleanAttr(node, "rounded_top_left"_s, false))));
			gm->put("rounded_top_right"_s, $($Boolean::valueOf(getBooleanAttr(node, "rounded_top_right"_s, false))));
			gm->put("rounded_bottom_left"_s, $($Boolean::valueOf(getBooleanAttr(node, "rounded_bottom_left"_s, false))));
			gm->put("rounded_bottom_right"_s, $($Boolean::valueOf(getBooleanAttr(node, "rounded_bottom_right"_s, false))));
			$var($NodeList, childNodes, $nc(node)->getChildNodes());
			int32_t nc = $nc(childNodes)->getLength();
			for (int32_t j = 0; j < nc; ++j) {
				$var($Node, child, childNodes->item(j));
				if ($nc(child)->getNodeType() == $Node::ELEMENT_NODE) {
					$assign(name, child->getNodeName());
					$var($Object, value, nullptr);
					if ("distance"_s->equals(name)) {
						$assign(value, $Integer::valueOf(getIntAttr(child, "value"_s, 0)));
					} else if ("border"_s->equals(name)) {
						int32_t var$0 = getIntAttr(child, "top"_s, 0);
						int32_t var$1 = getIntAttr(child, "left"_s, 0);
						int32_t var$2 = getIntAttr(child, "bottom"_s, 0);
						$assign(value, $new($Insets, var$0, var$1, var$2, getIntAttr(child, "right"_s, 0)));
					} else if ("aspect_ratio"_s->equals(name)) {
						$assign(value, $Float::valueOf(getFloatAttr(child, "value"_s, 1.0f)));
					} else {
						logError(themeName, $$str({"Unknown Metacity frame geometry value type: "_s, name}));
					}
					$var($String, childName, getStringAttr(child, "name"_s));
					if (childName != nullptr && value != nullptr) {
						gm->put(childName, value);
					}
				}
			}
		}
	}
	$set(this, frameGeometry, $cast($Map, $nc(this->frameGeometries)->get("normal"_s)));
}

$LayoutManager* Metacity::getTitlePaneLayout() {
	$init(Metacity);
	return $nc(Metacity::INSTANCE)->titlePaneLayout;
}

$Shape* Metacity::getRoundedClipShape(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcw, int32_t arch, int32_t corners) {
	if (this->roundedClipShape == nullptr) {
		$set(this, roundedClipShape, $new($Metacity$RoundRectClipShape));
	}
	$nc(this->roundedClipShape)->setRoundedRect(x, y, w, h, arcw, arch, corners);
	return this->roundedClipShape;
}

void Metacity::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	updateFrameGeometry(context);
	$set(this, context, context);
	$var($JButton, button, $cast($JButton, $nc(context)->getComponent()));
	$var($String, buttonName, $nc(button)->getName());
	int32_t buttonState = context->getComponentState();
	$var($JComponent, titlePane, $cast($JComponent, button->getParent()));
	$var($Container, titlePaneParent, $nc(titlePane)->getParent());
	$var($JInternalFrame, jif, findInternalFrame(titlePaneParent));
	if (jif == nullptr) {
		return;
	}
	bool active = $nc(jif)->isSelected();
	button->setOpaque(false);
	$var($String, state, "normal"_s);
	if (((int32_t)(buttonState & (uint32_t)$SynthConstants::PRESSED)) != 0) {
		$assign(state, "pressed"_s);
	} else if (((int32_t)(buttonState & (uint32_t)$SynthConstants::MOUSE_OVER)) != 0) {
		$assign(state, "prelight"_s);
	}
	$var($String, function, nullptr);
	$var($String, location, nullptr);
	bool left_corner = false;
	bool right_corner = false;
	if (buttonName == "InternalFrameTitlePane.menuButton"_s) {
		$assign(function, "menu"_s);
		$assign(location, "left_left"_s);
		left_corner = true;
	} else if (buttonName == "InternalFrameTitlePane.iconifyButton"_s) {
		$assign(function, "minimize"_s);
		int32_t var$1 = (jif->isIconifiable() ? 1 : 0);
		int32_t var$0 = var$1 + (jif->isMaximizable() ? 1 : 0);
		int32_t nButtons = (var$0 + (jif->isClosable() ? 1 : 0));
		right_corner = (nButtons == 1);
		switch (nButtons) {
		case 1:
			{
				$assign(location, "right_right"_s);
				break;
			}
		case 2:
			{
				$assign(location, "right_middle"_s);
				break;
			}
		case 3:
			{
				$assign(location, "right_left"_s);
				break;
			}
		}
	} else if (buttonName == "InternalFrameTitlePane.maximizeButton"_s) {
		$assign(function, "maximize"_s);
		right_corner = !jif->isClosable();
		$assign(location, jif->isClosable() ? "right_middle"_s : "right_right"_s);
	} else if (buttonName == "InternalFrameTitlePane.closeButton"_s) {
		$assign(function, "close"_s);
		right_corner = true;
		$assign(location, "right_right"_s);
	}
	$var($Node, frame, getNode(this->frame_style_set, "frame"_s, $$new($StringArray, {
		"focus"_s,
		(active ? "yes"_s : "no"_s),
		"state"_s,
		(jif->isMaximum() ? "maximized"_s : "normal"_s)
	})));
	if (function != nullptr && frame != nullptr) {
		$var($Node, frame_style, getNode("frame_style"_s, $$new($StringArray, {
			"name"_s,
			$(getStringAttr(frame, "style"_s))
		})));
		if (frame_style != nullptr) {
			$var($Shape, oldClip, $nc(g)->getClip());
			bool var$2 = (right_corner && getBoolean("rounded_top_right"_s, false));
			if (var$2 || (left_corner && getBoolean("rounded_top_left"_s, false))) {
				$var($Point, buttonLoc, button->getLocation());
				if (right_corner) {
					g->setClip($(getRoundedClipShape(0, 0, w, h, 12, 12, $Metacity$RoundRectClipShape::TOP_RIGHT)));
				} else {
					g->setClip($(getRoundedClipShape(0, 0, w, h, 11, 11, $Metacity$RoundRectClipShape::TOP_LEFT)));
				}
				$var($Rectangle, clipBounds, $nc(oldClip)->getBounds());
				g->clipRect($nc(clipBounds)->x, clipBounds->y, clipBounds->width, clipBounds->height);
			}
			drawButton(frame_style, $$str({location, "_background"_s}), state, g, w, h, jif);
			drawButton(frame_style, function, state, g, w, h, jif);
			g->setClip(oldClip);
		}
	}
}

void Metacity::drawButton($Node* frame_style, $String* function, $String* state, $Graphics* g, int32_t w, int32_t h, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	$var($Node, buttonNode, getNode(frame_style, "button"_s, $$new($StringArray, {
		"function"_s,
		function,
		"state"_s,
		state
	})));
	if (buttonNode == nullptr && !$nc(state)->equals("normal"_s)) {
		$assign(buttonNode, getNode(frame_style, "button"_s, $$new($StringArray, {
			"function"_s,
			function,
			"state"_s,
			"normal"_s
		})));
	}
	if (buttonNode != nullptr) {
		$var($Node, draw_ops, nullptr);
		$var($String, draw_ops_name, getStringAttr(buttonNode, "draw_ops"_s));
		if (draw_ops_name != nullptr) {
			$assign(draw_ops, getNode("draw_ops"_s, $$new($StringArray, {
				"name"_s,
				draw_ops_name
			})));
		} else {
			$assign(draw_ops, getNode(buttonNode, "draw_ops"_s, ($StringArray*)nullptr));
		}
		$nc(this->variables)->put("width"_s, $($Integer::valueOf(w)));
		$nc(this->variables)->put("height"_s, $($Integer::valueOf(h)));
		draw(draw_ops, g, jif);
	}
}

$JInternalFrame* Metacity::findInternalFrame($Component* comp$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, comp$renamed);
	if ($instanceOf($BasicInternalFrameTitlePane, $($nc(comp)->getParent()))) {
		$assign(comp, comp->getParent());
	}
	if ($instanceOf($JInternalFrame, comp)) {
		return $cast($JInternalFrame, comp);
	} else if ($instanceOf($JInternalFrame$JDesktopIcon, comp)) {
		return $nc(($cast($JInternalFrame$JDesktopIcon, comp)))->getInternalFrame();
	}
	if (!Metacity::$assertionsDisabled) {
		$throwNew($AssertionError, $of("cannot find the internal frame"_s));
	}
	return nullptr;
}

void Metacity::paintFrameBorder($SynthContext* context, $Graphics* g, int32_t x0, int32_t y0, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	updateFrameGeometry(context);
	$set(this, context, context);
	$var($JComponent, comp, $nc(context)->getComponent());
	$var($JComponent, titlePane, findChild(comp, "InternalFrame.northPane"_s));
	if (titlePane == nullptr) {
		return;
	}
	$var($JInternalFrame, jif, findInternalFrame(comp));
	if (jif == nullptr) {
		return;
	}
	bool active = $nc(jif)->isSelected();
	$var($Font, oldFont, $nc(g)->getFont());
	g->setFont($($nc(titlePane)->getFont()));
	g->translate(x0, y0);
	$var($Rectangle, titleRect, calculateTitleArea(jif));
	$var($JComponent, menuButton, findChild(titlePane, "InternalFrameTitlePane.menuButton"_s));
	$var($Icon, frameIcon, jif->getFrameIcon());
	$nc(this->variables)->put("mini_icon_width"_s, $($Integer::valueOf((frameIcon != nullptr) ? $nc(frameIcon)->getIconWidth() : 0)));
	$nc(this->variables)->put("mini_icon_height"_s, $($Integer::valueOf((frameIcon != nullptr) ? $nc(frameIcon)->getIconHeight() : 0)));
	$nc(this->variables)->put("title_width"_s, $($Integer::valueOf(calculateTitleTextWidth(g, jif))));
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(jif), g));
	int32_t var$0 = $nc(fm)->getAscent();
	$nc(this->variables)->put("title_height"_s, $($Integer::valueOf(var$0 + fm->getDescent())));
	$nc(this->variables)->put("icon_width"_s, $($Integer::valueOf(32)));
	$nc(this->variables)->put("icon_height"_s, $($Integer::valueOf(32)));
	if (this->frame_style_set != nullptr) {
		$var($Node, frame, getNode(this->frame_style_set, "frame"_s, $$new($StringArray, {
			"focus"_s,
			(active ? "yes"_s : "no"_s),
			"state"_s,
			(jif->isMaximum() ? "maximized"_s : "normal"_s)
		})));
		if (frame != nullptr) {
			$var($Node, frame_style, getNode("frame_style"_s, $$new($StringArray, {
				"name"_s,
				$(getStringAttr(frame, "style"_s))
			})));
			if (frame_style != nullptr) {
				$var($Shape, oldClip, g->getClip());
				bool roundTopLeft = getBoolean("rounded_top_left"_s, false);
				bool roundTopRight = getBoolean("rounded_top_right"_s, false);
				bool roundBottomLeft = getBoolean("rounded_bottom_left"_s, false);
				bool roundBottomRight = getBoolean("rounded_bottom_right"_s, false);
				if (roundTopLeft || roundTopRight || roundBottomLeft || roundBottomRight) {
					jif->setOpaque(false);
					g->setClip($(getRoundedClipShape(0, 0, width, height, 12, 12, (((roundTopLeft ? $Metacity$RoundRectClipShape::TOP_LEFT : 0) | (roundTopRight ? $Metacity$RoundRectClipShape::TOP_RIGHT : 0)) | (roundBottomLeft ? $Metacity$RoundRectClipShape::BOTTOM_LEFT : 0)) | (roundBottomRight ? $Metacity$RoundRectClipShape::BOTTOM_RIGHT : 0))));
				}
				$var($Rectangle, clipBounds, $nc(oldClip)->getBounds());
				g->clipRect($nc(clipBounds)->x, clipBounds->y, clipBounds->width, clipBounds->height);
				int32_t titleHeight = $nc(titlePane)->getHeight();
				bool minimized = jif->isIcon();
				$var($Insets, insets, getBorderInsets(context, nullptr));
				int32_t leftTitlebarEdge = getInt("left_titlebar_edge"_s);
				int32_t rightTitlebarEdge = getInt("right_titlebar_edge"_s);
				int32_t topTitlebarEdge = getInt("top_titlebar_edge"_s);
				int32_t bottomTitlebarEdge = getInt("bottom_titlebar_edge"_s);
				if (!minimized) {
					drawPiece(frame_style, g, "entire_background"_s, 0, 0, width, height, jif);
				}
				drawPiece(frame_style, g, "titlebar"_s, 0, 0, width, titleHeight, jif);
				drawPiece(frame_style, g, "titlebar_middle"_s, leftTitlebarEdge, topTitlebarEdge, width - leftTitlebarEdge - rightTitlebarEdge, titleHeight - topTitlebarEdge - bottomTitlebarEdge, jif);
				drawPiece(frame_style, g, "left_titlebar_edge"_s, 0, 0, leftTitlebarEdge, titleHeight, jif);
				drawPiece(frame_style, g, "right_titlebar_edge"_s, width - rightTitlebarEdge, 0, rightTitlebarEdge, titleHeight, jif);
				drawPiece(frame_style, g, "top_titlebar_edge"_s, 0, 0, width, topTitlebarEdge, jif);
				drawPiece(frame_style, g, "bottom_titlebar_edge"_s, 0, titleHeight - bottomTitlebarEdge, width, bottomTitlebarEdge, jif);
				drawPiece(frame_style, g, "title"_s, $nc(titleRect)->x, titleRect->y, titleRect->width, titleRect->height, jif);
				if (!minimized) {
					drawPiece(frame_style, g, "left_edge"_s, 0, titleHeight, $nc(insets)->left, height - titleHeight, jif);
					drawPiece(frame_style, g, "right_edge"_s, width - $nc(insets)->right, titleHeight, insets->right, height - titleHeight, jif);
					drawPiece(frame_style, g, "bottom_edge"_s, 0, height - $nc(insets)->bottom, width, insets->bottom, jif);
					drawPiece(frame_style, g, "overlay"_s, 0, 0, width, height, jif);
				}
				g->setClip(oldClip);
			}
		}
	}
	g->translate(-x0, -y0);
	g->setFont(oldFont);
}

$URL* Metacity::getThemeDir($String* themeName) {
	$init(Metacity);
	$init($Metacity$Privileged);
	return $cast($URL, $$new($Metacity$Privileged)->doPrivileged($Metacity$Privileged::GET_THEME_DIR, themeName));
}

$String* Metacity::getUserTheme() {
	$init(Metacity);
	$init($Metacity$Privileged);
	return $cast($String, $$new($Metacity$Privileged)->doPrivileged($Metacity$Privileged::GET_USER_THEME, nullptr));
}

void Metacity::tileImage($Graphics* g, $Image* image, int32_t x0, int32_t y0, int32_t w, int32_t h, $floats* alphas) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$var($Composite, oldComp, $nc(g2)->getComposite());
	int32_t sw = $nc(image)->getWidth(nullptr);
	int32_t sh = image->getHeight(nullptr);
	int32_t y = y0;
	while (y < y0 + h) {
		sh = $Math::min(sh, y0 + h - y);
		int32_t x = x0;
		while (x < x0 + w) {
			float f = ($nc(alphas)->length - 1.0f) * x / (x0 + w);
			int32_t i = $cast(int32_t, f);
			f -= $cast(int32_t, f);
			float alpha = (1 - f) * alphas->get(i);
			if (i + 1 < alphas->length) {
				alpha += f * alphas->get(i + 1);
			}
			g2->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC_OVER, alpha)));
			int32_t swm = $Math::min(sw, x0 + w - x);
			$nc(g)->drawImage(image, x, y, x + swm, y + sh, 0, 0, swm, sh, nullptr);
			x += swm;
		}
		y += sh;
	}
	g2->setComposite(oldComp);
}

$Image* Metacity::getImage($String* key, $Color* c) {
	$useLocalCurrentObjectStackCache();
	$var($Image, image, $cast($Image, $nc(this->images)->get($$str({key, "-"_s, $$str($nc(c)->getRGB())}))));
	if (image == nullptr) {
		$assign(image, $nc(this->imageFilter)->colorize($(getImage(key)), c));
		if (image != nullptr) {
			$nc(this->images)->put($$str({key, "-"_s, $$str($nc(c)->getRGB())}), image);
		}
	}
	return image;
}

$Image* Metacity::getImage($String* key) {
	$useLocalCurrentObjectStackCache();
	$var($Image, image, $cast($Image, $nc(this->images)->get(key)));
	if (image == nullptr) {
		if (this->themeDir != nullptr) {
			try {
				$var($URL, url, $new($URL, this->themeDir, key));
				$init($Metacity$Privileged);
				$assign(image, $cast($Image, $$new($Metacity$Privileged)->doPrivileged($Metacity$Privileged::GET_IMAGE, url)));
			} catch ($MalformedURLException& ex) {
			}
		}
		if (image != nullptr) {
			$nc(this->images)->put(key, image);
		}
	}
	return image;
}

$JComponent* Metacity::findChild($JComponent* parent, $String* name) {
	$init(Metacity);
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(parent)->getComponentCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($JComponent, c, $cast($JComponent, parent->getComponent(i)));
		if ($nc(name)->equals($($nc(c)->getName()))) {
			return c;
		}
	}
	return nullptr;
}

$Map* Metacity::getFrameGeometry() {
	return this->frameGeometry;
}

void Metacity::setFrameGeometry($JComponent* titlePane, $Map* gm) {
	$set(this, frameGeometry, gm);
	if (getInt("top_height"_s) == 0 && titlePane != nullptr) {
		$nc(gm)->put("top_height"_s, $($Integer::valueOf(titlePane->getHeight())));
	}
}

int32_t Metacity::getInt($String* key) {
	$var($Integer, i, $cast($Integer, $nc(this->frameGeometry)->get(key)));
	if (i == nullptr) {
		$assign(i, $cast($Integer, $nc(this->variables)->get(key)));
	}
	return (i != nullptr) ? $nc(i)->intValue() : 0;
}

bool Metacity::getBoolean($String* key, bool fallback) {
	$var($Boolean, b, $cast($Boolean, $nc(this->frameGeometry)->get(key)));
	return (b != nullptr) ? $nc(b)->booleanValue() : fallback;
}

void Metacity::drawArc($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($Color, color, parseColor($(getStringAttr(attrs, "color"_s))));
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	int32_t start_angle = $nc(this->aee)->evaluate($(getStringAttr(attrs, "start_angle"_s)));
	int32_t extent_angle = $nc(this->aee)->evaluate($(getStringAttr(attrs, "extent_angle"_s)));
	bool filled = getBooleanAttr(node, "filled"_s, false);
	if (getInt("width"_s) == -1) {
		x -= w;
	}
	if (getInt("height"_s) == -1) {
		y -= h;
	}
	$nc(g)->setColor(color);
	if (filled) {
		g->fillArc(x, y, w, h, start_angle, extent_angle);
	} else {
		g->drawArc(x, y, w, h, start_angle, extent_angle);
	}
}

void Metacity::drawLine($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($Color, color, parseColor($(getStringAttr(attrs, "color"_s))));
	int32_t x1 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x1"_s)));
	int32_t y1 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y1"_s)));
	int32_t x2 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x2"_s)));
	int32_t y2 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y2"_s)));
	int32_t lineWidth = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)), 1);
	$nc(g)->setColor(color);
	if (lineWidth != 1) {
		$var($Graphics2D, g2d, $cast($Graphics2D, g));
		$var($Stroke, stroke, g2d->getStroke());
		g2d->setStroke($$new($BasicStroke, (float)lineWidth));
		g2d->drawLine(x1, y1, x2, y2);
		g2d->setStroke(stroke);
	} else {
		g->drawLine(x1, y1, x2, y2);
	}
}

void Metacity::drawRectangle($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($Color, color, parseColor($(getStringAttr(attrs, "color"_s))));
	bool filled = getBooleanAttr(node, "filled"_s, false);
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	$nc(g)->setColor(color);
	if (getInt("width"_s) == -1) {
		x -= w;
	}
	if (getInt("height"_s) == -1) {
		y -= h;
	}
	if (filled) {
		g->fillRect(x, y, w, h);
	} else {
		g->drawRect(x, y, w, h);
	}
}

void Metacity::drawTile($Node* node, $Graphics* g, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	int32_t x0 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y0 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	int32_t tw = $nc(this->aee)->evaluate($(getStringAttr(attrs, "tile_width"_s)));
	int32_t th = $nc(this->aee)->evaluate($(getStringAttr(attrs, "tile_height"_s)));
	int32_t width = getInt("width"_s);
	int32_t height = getInt("height"_s);
	if (width == -1) {
		x0 -= w;
	}
	if (height == -1) {
		y0 -= h;
	}
	$var($Shape, oldClip, $nc(g)->getClip());
	if ($instanceOf($Graphics2D, g)) {
		$nc(($cast($Graphics2D, g)))->clip($$new($Rectangle, x0, y0, w, h));
	}
	$nc(this->variables)->put("width"_s, $($Integer::valueOf(tw)));
	$nc(this->variables)->put("height"_s, $($Integer::valueOf(th)));
	$var($Node, draw_ops, getNode("draw_ops"_s, $$new($StringArray, {
		"name"_s,
		$(getStringAttr(node, "name"_s))
	})));
	int32_t y = y0;
	while (y < y0 + h) {
		int32_t x = x0;
		while (x < x0 + w) {
			g->translate(x, y);
			draw(draw_ops, g, jif);
			g->translate(-x, -y);
			x += tw;
		}
		y += th;
	}
	$nc(this->variables)->put("width"_s, $($Integer::valueOf(width)));
	$nc(this->variables)->put("height"_s, $($Integer::valueOf(height)));
	g->setClip(oldClip);
}

void Metacity::drawTint($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($Color, color, parseColor($(getStringAttr(attrs, "color"_s))));
	float alpha = $Float::parseFloat($(getStringAttr(attrs, "alpha"_s)));
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	if (getInt("width"_s) == -1) {
		x -= w;
	}
	if (getInt("height"_s) == -1) {
		y -= h;
	}
	if ($instanceOf($Graphics2D, g)) {
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		$var($Composite, oldComp, $nc(g2)->getComposite());
		$var($AlphaComposite, ac, $AlphaComposite::getInstance($AlphaComposite::SRC_OVER, alpha));
		g2->setComposite(ac);
		g2->setColor(color);
		g2->fillRect(x, y, w, h);
		g2->setComposite(oldComp);
	}
}

void Metacity::drawTitle($Node* node, $Graphics* g, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($String, colorStr, getStringAttr(attrs, "color"_s));
	int32_t i = $nc(colorStr)->indexOf("gtk:fg["_s);
	if (i > 0) {
		$var($String, var$0, $$str({$(colorStr->substring(0, i)), "gtk:text["_s}));
		$assign(colorStr, $concat(var$0, $(colorStr->substring(i + 7))));
	}
	$var($Color, color, parseColor(colorStr));
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	$var($String, title, $nc(jif)->getTitle());
	if (title != nullptr) {
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(jif), g));
		$assign(title, $SwingUtilities2::clipStringIfNecessary(jif, fm, title, $nc($(calculateTitleArea(jif)))->width));
		$nc(g)->setColor(color);
		$SwingUtilities2::drawString(static_cast<$JComponent*>(jif), g, title, x, y + $nc(fm)->getAscent());
	}
}

$Dimension* Metacity::calculateButtonSize($JComponent* titlePane) {
	$useLocalCurrentObjectStackCache();
	int32_t buttonHeight = getInt("button_height"_s);
	if (buttonHeight == 0) {
		buttonHeight = $nc(titlePane)->getHeight();
		if (buttonHeight == 0) {
			buttonHeight = 13;
		} else {
			$var($Insets, button_border, $cast($Insets, $nc(this->frameGeometry)->get("button_border"_s)));
			if (button_border != nullptr) {
				buttonHeight -= (button_border->top + button_border->bottom);
			}
		}
	}
	int32_t buttonWidth = getInt("button_width"_s);
	if (buttonWidth == 0) {
		buttonWidth = buttonHeight;
		$var($Float, aspect_ratio, $cast($Float, $nc(this->frameGeometry)->get("aspect_ratio"_s)));
		if (aspect_ratio != nullptr) {
			buttonWidth = $cast(int32_t, (buttonHeight / aspect_ratio->floatValue()));
		}
	}
	return $new($Dimension, buttonWidth, buttonHeight);
}

$Rectangle* Metacity::calculateTitleArea($JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, titlePane, findChild(jif, "InternalFrame.northPane"_s));
	$var($Dimension, buttonDim, calculateButtonSize(titlePane));
	$var($Insets, title_border, $cast($Insets, $nc(this->frameGeometry)->get("title_border"_s)));
	$var($Insets, button_border, $cast($Insets, $nc($(getFrameGeometry()))->get("button_border"_s)));
	$var($Rectangle, r, $new($Rectangle));
	r->x = getInt("left_titlebar_edge"_s);
	r->y = 0;
	r->height = $nc(titlePane)->getHeight();
	if (title_border != nullptr) {
		r->x += title_border->left;
		r->y += title_border->top;
		r->height -= (title_border->top + title_border->bottom);
	}
	if ($nc($($nc($(titlePane->getParent()))->getComponentOrientation()))->isLeftToRight()) {
		r->x += $nc(buttonDim)->width;
		if (button_border != nullptr) {
			r->x += button_border->left;
		}
		int32_t var$0 = titlePane->getWidth() - r->x;
		r->width = var$0 - getInt("right_titlebar_edge"_s);
		if ($nc(jif)->isClosable()) {
			r->width -= buttonDim->width;
		}
		if ($nc(jif)->isMaximizable()) {
			r->width -= buttonDim->width;
		}
		if ($nc(jif)->isIconifiable()) {
			r->width -= buttonDim->width;
		}
	} else {
		if ($nc(jif)->isClosable()) {
			r->x += $nc(buttonDim)->width;
		}
		if ($nc(jif)->isMaximizable()) {
			r->x += $nc(buttonDim)->width;
		}
		if ($nc(jif)->isIconifiable()) {
			r->x += $nc(buttonDim)->width;
		}
		int32_t var$1 = titlePane->getWidth() - r->x;
		r->width = var$1 - getInt("right_titlebar_edge"_s) - $nc(buttonDim)->width;
		if (button_border != nullptr) {
			r->x -= button_border->right;
		}
	}
	if (title_border != nullptr) {
		r->width -= title_border->right;
	}
	return r;
}

int32_t Metacity::calculateTitleTextWidth($Graphics* g, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	$var($String, title, $nc(jif)->getTitle());
	if (title != nullptr) {
		$var($Rectangle, r, calculateTitleArea(jif));
		return $Math::min($SwingUtilities2::stringWidth(jif, $($SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(jif), g)), title), $nc(r)->width);
	}
	return 0;
}

void Metacity::setClip($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	if (getInt("width"_s) == -1) {
		x -= w;
	}
	if (getInt("height"_s) == -1) {
		y -= h;
	}
	if ($instanceOf($Graphics2D, g)) {
		$nc(($cast($Graphics2D, g)))->clip($$new($Rectangle, x, y, w, h));
	}
}

void Metacity::drawGTKArrow($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($String, arrow, getStringAttr(attrs, "arrow"_s));
	$var($String, shadow, getStringAttr(attrs, "shadow"_s));
	$var($String, stateStr, $nc($(getStringAttr(attrs, "state"_s)))->toUpperCase());
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	int32_t state = -1;
	if ("NORMAL"_s->equals(stateStr)) {
		state = $SynthConstants::ENABLED;
	} else if ("SELECTED"_s->equals(stateStr)) {
		state = $SynthConstants::SELECTED;
	} else if ("INSENSITIVE"_s->equals(stateStr)) {
		state = $SynthConstants::DISABLED;
	} else if ("PRELIGHT"_s->equals(stateStr)) {
		state = $SynthConstants::MOUSE_OVER;
	}
	$GTKConstants$ShadowType* shadowType = nullptr;
	if ("in"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::IN;
	} else if ("out"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::OUT;
	} else if ("etched_in"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::ETCHED_IN;
	} else if ("etched_out"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::ETCHED_OUT;
	} else if ("none"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::NONE;
	}
	$GTKConstants$ArrowType* direction = nullptr;
	if ("up"_s->equals(arrow)) {
		$init($GTKConstants$ArrowType);
		direction = $GTKConstants$ArrowType::UP;
	} else if ("down"_s->equals(arrow)) {
		$init($GTKConstants$ArrowType);
		direction = $GTKConstants$ArrowType::DOWN;
	} else if ("left"_s->equals(arrow)) {
		$init($GTKConstants$ArrowType);
		direction = $GTKConstants$ArrowType::LEFT;
	} else if ("right"_s->equals(arrow)) {
		$init($GTKConstants$ArrowType);
		direction = $GTKConstants$ArrowType::RIGHT;
	}
	$init($GTKPainter);
	$nc($GTKPainter::INSTANCE)->paintMetacityElement(this->context, g, state, "metacity-arrow"_s, x, y, w, h, shadowType, direction);
}

void Metacity::drawGTKBox($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($String, shadow, getStringAttr(attrs, "shadow"_s));
	$var($String, stateStr, $nc($(getStringAttr(attrs, "state"_s)))->toUpperCase());
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	int32_t state = -1;
	if ("NORMAL"_s->equals(stateStr)) {
		state = $SynthConstants::ENABLED;
	} else if ("SELECTED"_s->equals(stateStr)) {
		state = $SynthConstants::SELECTED;
	} else if ("INSENSITIVE"_s->equals(stateStr)) {
		state = $SynthConstants::DISABLED;
	} else if ("PRELIGHT"_s->equals(stateStr)) {
		state = $SynthConstants::MOUSE_OVER;
	}
	$GTKConstants$ShadowType* shadowType = nullptr;
	if ("in"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::IN;
	} else if ("out"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::OUT;
	} else if ("etched_in"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::ETCHED_IN;
	} else if ("etched_out"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::ETCHED_OUT;
	} else if ("none"_s->equals(shadow)) {
		$init($GTKConstants$ShadowType);
		shadowType = $GTKConstants$ShadowType::NONE;
	}
	$init($GTKPainter);
	$nc($GTKPainter::INSTANCE)->paintMetacityElement(this->context, g, state, "metacity-box"_s, x, y, w, h, shadowType, nullptr);
}

void Metacity::drawGTKVLine($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($String, stateStr, $nc($(getStringAttr(attrs, "state"_s)))->toUpperCase());
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y1 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y1"_s)));
	int32_t y2 = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y2"_s)));
	int32_t state = -1;
	if ("NORMAL"_s->equals(stateStr)) {
		state = $SynthConstants::ENABLED;
	} else if ("SELECTED"_s->equals(stateStr)) {
		state = $SynthConstants::SELECTED;
	} else if ("INSENSITIVE"_s->equals(stateStr)) {
		state = $SynthConstants::DISABLED;
	} else if ("PRELIGHT"_s->equals(stateStr)) {
		state = $SynthConstants::MOUSE_OVER;
	}
	$init($GTKPainter);
	$nc($GTKPainter::INSTANCE)->paintMetacityElement(this->context, g, state, "metacity-vline"_s, x, y1, 1, y2 - y1, nullptr, nullptr);
}

void Metacity::drawGradient($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($String, type, getStringAttr(attrs, "type"_s));
	float alpha = getFloatAttr(node, "alpha"_s, -1.0f);
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	if (getInt("width"_s) == -1) {
		x -= w;
	}
	if (getInt("height"_s) == -1) {
		y -= h;
	}
	$var($NodeArray, colorNodes, getNodesByName(node, "color"_s));
	$var($ColorArray, colors, $new($ColorArray, $nc(colorNodes)->length));
	for (int32_t i = 0; i < colorNodes->length; ++i) {
		colors->set(i, $(parseColor($(getStringAttr(colorNodes->get(i), "value"_s)))));
	}
	bool var$0 = "diagonal"_s->equals(type);
	bool horizontal = (var$0 || "horizontal"_s->equals(type));
	bool var$1 = "diagonal"_s->equals(type);
	bool vertical = (var$1 || "vertical"_s->equals(type));
	if ($instanceOf($Graphics2D, g)) {
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		$var($Composite, oldComp, $nc(g2)->getComposite());
		if (alpha >= 0.0f) {
			g2->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC_OVER, alpha)));
		}
		int32_t n = colors->length - 1;
		for (int32_t i = 0; i < n; ++i) {
			g2->setPaint($$new($GradientPaint, (float)(x + (horizontal ? ($div(i * w, n)) : 0)), (float)(y + (vertical ? ($div(i * h, n)) : 0)), colors->get(i), (float)(x + (horizontal ? ($div((i + 1) * w, n)) : 0)), (float)(y + (vertical ? ($div((i + 1) * h, n)) : 0)), colors->get(i + 1)));
			g2->fillRect(x + (horizontal ? ($div(i * w, n)) : 0), y + (vertical ? ($div(i * h, n)) : 0), (horizontal ? ($div(w, n)) : w), (vertical ? ($div(h, n)) : h));
		}
		g2->setComposite(oldComp);
	}
}

void Metacity::drawImage($Node* node, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($String, filename, getStringAttr(attrs, "filename"_s));
	$var($String, colorizeStr, getStringAttr(attrs, "colorize"_s));
	$var($Color, colorize, (colorizeStr != nullptr) ? parseColor(colorizeStr) : ($Color*)nullptr);
	$var($String, alpha, getStringAttr(attrs, "alpha"_s));
	$var($Image, object, (colorize != nullptr) ? getImage(filename, colorize) : getImage(filename));
	$nc(this->variables)->put("object_width"_s, $($Integer::valueOf($nc(object)->getWidth(nullptr))));
	$nc(this->variables)->put("object_height"_s, $($Integer::valueOf($nc(object)->getHeight(nullptr))));
	$var($String, fill_type, getStringAttr(attrs, "fill_type"_s));
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	if (getInt("width"_s) == -1) {
		x -= w;
	}
	if (getInt("height"_s) == -1) {
		y -= h;
	}
	if (alpha != nullptr) {
		if ("tile"_s->equals(fill_type)) {
			$var($StringTokenizer, tokenizer, $new($StringTokenizer, alpha, ":"_s));
			$var($floats, alphas, $new($floats, tokenizer->countTokens()));
			for (int32_t i = 0; i < alphas->length; ++i) {
				alphas->set(i, $Float::parseFloat($(tokenizer->nextToken())));
			}
			tileImage(g, object, x, y, w, h, alphas);
		} else {
			float a = $Float::parseFloat(alpha);
			if ($instanceOf($Graphics2D, g)) {
				$var($Graphics2D, g2, $cast($Graphics2D, g));
				$var($Composite, oldComp, $nc(g2)->getComposite());
				g2->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC_OVER, a)));
				g2->drawImage(object, x, y, w, h, nullptr);
				g2->setComposite(oldComp);
			}
		}
	} else {
		$nc(g)->drawImage(object, x, y, w, h, nullptr);
	}
}

void Metacity::drawIcon($Node* node, $Graphics* g, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, $nc(jif)->getFrameIcon());
	if (icon == nullptr) {
		return;
	}
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	$var($String, alpha, getStringAttr(attrs, "alpha"_s));
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)));
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)));
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)));
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)));
	if (getInt("width"_s) == -1) {
		x -= w;
	}
	if (getInt("height"_s) == -1) {
		y -= h;
	}
	if (alpha != nullptr) {
		float a = $Float::parseFloat(alpha);
		if ($instanceOf($Graphics2D, g)) {
			$var($Graphics2D, g2, $cast($Graphics2D, g));
			$var($Composite, oldComp, $nc(g2)->getComposite());
			g2->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC_OVER, a)));
			$nc(icon)->paintIcon(jif, g, x, y);
			g2->setComposite(oldComp);
		}
	} else {
		$nc(icon)->paintIcon(jif, g, x, y);
	}
}

void Metacity::drawInclude($Node* node, $Graphics* g, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	int32_t oldWidth = getInt("width"_s);
	int32_t oldHeight = getInt("height"_s);
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	int32_t x = $nc(this->aee)->evaluate($(getStringAttr(attrs, "x"_s)), 0);
	int32_t y = $nc(this->aee)->evaluate($(getStringAttr(attrs, "y"_s)), 0);
	int32_t w = $nc(this->aee)->evaluate($(getStringAttr(attrs, "width"_s)), -1);
	int32_t h = $nc(this->aee)->evaluate($(getStringAttr(attrs, "height"_s)), -1);
	if (w != -1) {
		$nc(this->variables)->put("width"_s, $($Integer::valueOf(w)));
	}
	if (h != -1) {
		$nc(this->variables)->put("height"_s, $($Integer::valueOf(h)));
	}
	$var($Node, draw_ops, getNode("draw_ops"_s, $$new($StringArray, {
		"name"_s,
		$(getStringAttr(node, "name"_s))
	})));
	$nc(g)->translate(x, y);
	draw(draw_ops, g, jif);
	g->translate(-x, -y);
	if (w != -1) {
		$nc(this->variables)->put("width"_s, $($Integer::valueOf(oldWidth)));
	}
	if (h != -1) {
		$nc(this->variables)->put("height"_s, $($Integer::valueOf(oldHeight)));
	}
}

void Metacity::draw($Node* draw_ops, $Graphics* g, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	if (draw_ops != nullptr) {
		$var($NodeList, nodes, draw_ops->getChildNodes());
		if (nodes != nullptr) {
			$var($Shape, oldClip, $nc(g)->getClip());
			for (int32_t i = 0; i < nodes->getLength(); ++i) {
				$var($Node, child, nodes->item(i));
				if ($nc(child)->getNodeType() == $Node::ELEMENT_NODE) {
					try {
						$var($String, name, child->getNodeName());
						if ("include"_s->equals(name)) {
							drawInclude(child, g, jif);
						} else if ("arc"_s->equals(name)) {
							drawArc(child, g);
						} else if ("clip"_s->equals(name)) {
							setClip(child, g);
						} else if ("gradient"_s->equals(name)) {
							drawGradient(child, g);
						} else if ("gtk_arrow"_s->equals(name)) {
							drawGTKArrow(child, g);
						} else if ("gtk_box"_s->equals(name)) {
							drawGTKBox(child, g);
						} else if ("gtk_vline"_s->equals(name)) {
							drawGTKVLine(child, g);
						} else if ("image"_s->equals(name)) {
							drawImage(child, g);
						} else if ("icon"_s->equals(name)) {
							drawIcon(child, g, jif);
						} else if ("line"_s->equals(name)) {
							drawLine(child, g);
						} else if ("rectangle"_s->equals(name)) {
							drawRectangle(child, g);
						} else if ("tint"_s->equals(name)) {
							drawTint(child, g);
						} else if ("tile"_s->equals(name)) {
							drawTile(child, g, jif);
						} else if ("title"_s->equals(name)) {
							drawTitle(child, g, jif);
						} else {
							$nc($System::err)->println($$str({"Unknown Metacity drawing op: "_s, child}));
						}
					} catch ($NumberFormatException& ex) {
						logError(this->themeName, static_cast<$Exception*>(ex));
					}
				}
			}
			g->setClip(oldClip);
		}
	}
}

void Metacity::drawPiece($Node* frame_style, $Graphics* g, $String* position, int32_t x, int32_t y, int32_t width, int32_t height, $JInternalFrame* jif) {
	$useLocalCurrentObjectStackCache();
	$var($Node, piece, getNode(frame_style, "piece"_s, $$new($StringArray, {
		"position"_s,
		position
	})));
	if (piece != nullptr) {
		$var($Node, draw_ops, nullptr);
		$var($String, draw_ops_name, getStringAttr(piece, "draw_ops"_s));
		if (draw_ops_name != nullptr) {
			$assign(draw_ops, getNode("draw_ops"_s, $$new($StringArray, {
				"name"_s,
				draw_ops_name
			})));
		} else {
			$assign(draw_ops, getNode(piece, "draw_ops"_s, ($StringArray*)nullptr));
		}
		$nc(this->variables)->put("width"_s, $($Integer::valueOf(width)));
		$nc(this->variables)->put("height"_s, $($Integer::valueOf(height)));
		$nc(g)->translate(x, y);
		draw(draw_ops, g, jif);
		g->translate(-x, -y);
	}
}

$Insets* Metacity::getBorderInsets($SynthContext* context, $Insets* insets$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	updateFrameGeometry(context);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	$nc(insets)->top = $nc(($cast($Insets, $($nc(this->frameGeometry)->get("title_border"_s)))))->top;
	insets->bottom = getInt("bottom_height"_s);
	insets->left = getInt("left_width"_s);
	insets->right = getInt("right_width"_s);
	return insets;
}

void Metacity::updateFrameGeometry($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, context, context);
	$var($JComponent, comp, $nc(context)->getComponent());
	$var($JComponent, titlePane, findChild(comp, "InternalFrame.northPane"_s));
	$var($JInternalFrame, jif, nullptr);
	if ($instanceOf($JButton, comp)) {
		$var($JComponent, bTitlePane, $cast($JComponent, $nc(comp)->getParent()));
		$var($Container, titlePaneParent, $nc(bTitlePane)->getParent());
		$assign(jif, findInternalFrame(titlePaneParent));
	} else {
		$assign(jif, findInternalFrame(comp));
	}
	if (jif == nullptr) {
		return;
	}
	if (this->frame_style_set == nullptr) {
		$var($Node, window, getNode("window"_s, $$new($StringArray, {
			"type"_s,
			"normal"_s
		})));
		if (window != nullptr) {
			$set(this, frame_style_set, getNode("frame_style_set"_s, $$new($StringArray, {
				"name"_s,
				$(getStringAttr(window, "style_set"_s))
			})));
		}
		if (this->frame_style_set == nullptr) {
			$set(this, frame_style_set, getNode("frame_style_set"_s, $$new($StringArray, {
				"name"_s,
				"normal"_s
			})));
		}
	}
	if (this->frame_style_set != nullptr) {
		$var($Node, frame, getNode(this->frame_style_set, "frame"_s, $$new($StringArray, {
			"focus"_s,
			($nc(jif)->isSelected() ? "yes"_s : "no"_s),
			"state"_s,
			($nc(jif)->isMaximum() ? "maximized"_s : "normal"_s)
		})));
		if (frame != nullptr) {
			$var($Node, frame_style, getNode("frame_style"_s, $$new($StringArray, {
				"name"_s,
				$(getStringAttr(frame, "style"_s))
			})));
			if (frame_style != nullptr) {
				$var($Map, gm, $cast($Map, $nc(this->frameGeometries)->get($(getStringAttr(frame_style, "geometry"_s)))));
				setFrameGeometry(titlePane, gm);
			}
		}
	}
}

void Metacity::logError($String* themeName, $Exception* ex) {
	$init(Metacity);
	logError(themeName, $($nc(ex)->toString()));
}

void Metacity::logError($String* themeName, $String* msg) {
	$init(Metacity);
	if (!Metacity::errorLogged) {
		$nc($System::err)->println($$str({"Exception in Metacity for theme \""_s, themeName, "\": "_s, msg}));
		Metacity::errorLogged = true;
	}
}

$Document* Metacity::getXMLDoc($URL* xmlFile) {
	$init(Metacity);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (Metacity::documentBuilder == nullptr) {
		$assignStatic(Metacity::documentBuilder, $nc($($DocumentBuilderFactory::newInstance()))->newDocumentBuilder());
	}
	$var($InputStream, inputStream, $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Metacity$1, xmlFile)))));
	$var($Document, doc, nullptr);
	if (inputStream != nullptr) {
		$assign(doc, $nc(Metacity::documentBuilder)->parse(inputStream));
	}
	return doc;
}

$NodeArray* Metacity::getNodesByName($Node* parent, $String* name) {
	$useLocalCurrentObjectStackCache();
	$var($NodeList, nodes, $nc(parent)->getChildNodes());
	int32_t n = $nc(nodes)->getLength();
	$var($ArrayList, list, $new($ArrayList));
	for (int32_t i = 0; i < n; ++i) {
		$var($Node, node, nodes->item(i));
		if ($nc(name)->equals($($nc(node)->getNodeName()))) {
			list->add(node);
		}
	}
	return $fcast($NodeArray, list->toArray($$new($NodeArray, list->size())));
}

$Node* Metacity::getNode($String* tagName, $StringArray* attrs) {
	$var($NodeList, nodes, $nc(Metacity::xmlDoc)->getElementsByTagName(tagName));
	return (nodes != nullptr) ? getNode(nodes, tagName, attrs) : ($Node*)nullptr;
}

$Node* Metacity::getNode($Node* parent, $String* name, $StringArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, nullptr);
	$var($NodeList, nodes, $nc(parent)->getChildNodes());
	if (nodes != nullptr) {
		$assign(node, getNode(nodes, name, attrs));
	}
	if (node == nullptr) {
		$var($String, inheritFrom, getStringAttr(parent, "parent"_s));
		if (inheritFrom != nullptr) {
			$var($Node, var$0, parent->getParentNode());
			$var($Node, inheritFromNode, getNode(var$0, $(parent->getNodeName()), $$new($StringArray, {
				"name"_s,
				inheritFrom
			})));
			if (inheritFromNode != nullptr) {
				$assign(node, getNode(inheritFromNode, name, attrs));
			}
		}
	}
	return node;
}

$Node* Metacity::getNode($NodeList* nodes, $String* name, $StringArray* attrs) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(nodes)->getLength();
	for (int32_t i = 0; i < n; ++i) {
		$var($Node, node, nodes->item(i));
		if ($nc(name)->equals($($nc(node)->getNodeName()))) {
			if (attrs != nullptr) {
				$var($NamedNodeMap, nodeAttrs, $nc(node)->getAttributes());
				if (nodeAttrs != nullptr) {
					bool matches = true;
					int32_t nAttrs = attrs->length / 2;
					for (int32_t a = 0; a < nAttrs; ++a) {
						$var($String, aName, attrs->get(a * 2));
						$var($String, aValue, attrs->get(a * 2 + 1));
						$var($Node, attr, nodeAttrs->getNamedItem(aName));
						if (attr == nullptr || aValue != nullptr && !aValue->equals($($nc(attr)->getNodeValue()))) {
							matches = false;
							break;
						}
					}
					if (matches) {
						return node;
					}
				}
			} else {
				return node;
			}
		}
	}
	return nullptr;
}

$String* Metacity::getStringAttr($Node* node, $String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, value, nullptr);
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	if (attrs != nullptr) {
		$assign(value, getStringAttr(attrs, name));
		if (value == nullptr) {
			$var($String, inheritFrom, getStringAttr(attrs, "parent"_s));
			if (inheritFrom != nullptr) {
				$var($Node, var$0, node->getParentNode());
				$var($Node, inheritFromNode, getNode(var$0, $(node->getNodeName()), $$new($StringArray, {
					"name"_s,
					inheritFrom
				})));
				if (inheritFromNode != nullptr) {
					$assign(value, getStringAttr(inheritFromNode, name));
				}
			}
		}
	}
	return value;
}

$String* Metacity::getStringAttr($NamedNodeMap* attrs, $String* name) {
	$var($Node, item, $nc(attrs)->getNamedItem(name));
	return (item != nullptr) ? $nc(item)->getNodeValue() : ($String*)nullptr;
}

bool Metacity::getBooleanAttr($Node* node, $String* name, bool fallback) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, getStringAttr(node, name));
	if (str != nullptr) {
		return $nc($($Boolean::valueOf(str)))->booleanValue();
	}
	return fallback;
}

int32_t Metacity::getIntAttr($Node* node, $String* name, int32_t fallback) {
	$var($String, str, getStringAttr(node, name));
	int32_t value = fallback;
	if (str != nullptr) {
		try {
			value = $Integer::parseInt(str);
		} catch ($NumberFormatException& ex) {
			logError(this->themeName, static_cast<$Exception*>(ex));
		}
	}
	return value;
}

float Metacity::getFloatAttr($Node* node, $String* name, float fallback) {
	$var($String, str, getStringAttr(node, name));
	float value = fallback;
	if (str != nullptr) {
		try {
			value = $Float::parseFloat(str);
		} catch ($NumberFormatException& ex) {
			logError(this->themeName, static_cast<$Exception*>(ex));
		}
	}
	return value;
}

$Color* Metacity::parseColor($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, str, "/"_s));
	int32_t n = tokenizer->countTokens();
	if (n > 1) {
		$var($String, function, tokenizer->nextToken());
		if ("shade"_s->equals(function)) {
			if (!Metacity::$assertionsDisabled && !(n == 3)) {
				$throwNew($AssertionError);
			}
			$var($Color, c, parseColor2($(tokenizer->nextToken())));
			float alpha = $Float::parseFloat($(tokenizer->nextToken()));
			return $GTKColorType::adjustColor(c, 1.0f, alpha, alpha);
		} else if ("blend"_s->equals(function)) {
			if (!Metacity::$assertionsDisabled && !(n == 4)) {
				$throwNew($AssertionError);
			}
			$var($Color, bg, parseColor2($(tokenizer->nextToken())));
			$var($Color, fg, parseColor2($(tokenizer->nextToken())));
			float alpha = $Float::parseFloat($(tokenizer->nextToken()));
			if (alpha > 1.0f) {
				alpha = 1.0f / alpha;
			}
			int32_t var$1 = $nc(bg)->getRed();
			int32_t var$3 = $nc(fg)->getRed();
			float var$2 = ((var$3 - bg->getRed()) * alpha);
			int32_t var$0 = $cast(int32_t, (var$1 + var$2));
			int32_t var$5 = bg->getRed();
			int32_t var$7 = fg->getRed();
			float var$6 = ((var$7 - bg->getRed()) * alpha);
			int32_t var$4 = $cast(int32_t, (var$5 + var$6));
			int32_t var$8 = bg->getRed();
			int32_t var$10 = fg->getRed();
			float var$9 = ((var$10 - bg->getRed()) * alpha);
			return $new($Color, var$0, var$4, $cast(int32_t, (var$8 + var$9)));
		} else {
			$nc($System::err)->println($$str({"Unknown Metacity color function="_s, str}));
			return nullptr;
		}
	} else {
		return parseColor2(str);
	}
}

$Color* Metacity::parseColor2($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, nullptr);
	if ($nc(str)->startsWith("gtk:"_s)) {
		int32_t i1 = str->indexOf((int32_t)u'[');
		if (i1 > 3) {
			$var($String, typeStr, $(str->substring(4, i1))->toLowerCase());
			int32_t i2 = str->indexOf((int32_t)u']');
			if (i2 > i1 + 1) {
				$var($String, stateStr, $(str->substring(i1 + 1, i2))->toUpperCase());
				int32_t state = -1;
				if ("ACTIVE"_s->equals(stateStr)) {
					state = $SynthConstants::PRESSED;
				} else if ("INSENSITIVE"_s->equals(stateStr)) {
					state = $SynthConstants::DISABLED;
				} else if ("NORMAL"_s->equals(stateStr)) {
					state = $SynthConstants::ENABLED;
				} else if ("PRELIGHT"_s->equals(stateStr)) {
					state = $SynthConstants::MOUSE_OVER;
				} else if ("SELECTED"_s->equals(stateStr)) {
					state = $SynthConstants::SELECTED;
				}
				$var($ColorType, type, nullptr);
				if ("fg"_s->equals(typeStr)) {
					$init($GTKColorType);
					$assign(type, $GTKColorType::FOREGROUND);
				} else if ("bg"_s->equals(typeStr)) {
					$init($GTKColorType);
					$assign(type, $GTKColorType::BACKGROUND);
				} else if ("base"_s->equals(typeStr)) {
					$init($GTKColorType);
					$assign(type, $GTKColorType::TEXT_BACKGROUND);
				} else if ("text"_s->equals(typeStr)) {
					$init($GTKColorType);
					$assign(type, $GTKColorType::TEXT_FOREGROUND);
				} else if ("dark"_s->equals(typeStr)) {
					$init($GTKColorType);
					$assign(type, $GTKColorType::DARK);
				} else if ("light"_s->equals(typeStr)) {
					$init($GTKColorType);
					$assign(type, $GTKColorType::LIGHT);
				}
				if (state >= 0 && type != nullptr) {
					$assign(c, $nc(($cast($GTKStyle, $($nc(this->context)->getStyle()))))->getGTKColor(this->context, state, type));
				}
			}
		}
	}
	if (c == nullptr) {
		$assign(c, parseColorString(str));
	}
	return c;
}

$Color* Metacity::parseColorString($String* str$renamed) {
	$init(Metacity);
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	if ($nc(str)->charAt(0) == u'#') {
		$assign(str, str->substring(1));
		int32_t i = str->length();
		if (i < 3 || i > 12 || (i % 3) != 0) {
			return nullptr;
		}
		i /= 3;
		int32_t r = 0;
		int32_t g = 0;
		int32_t b = 0;
		try {
			r = $Integer::parseInt($(str->substring(0, i)), 16);
			g = $Integer::parseInt($(str->substring(i, i * 2)), 16);
			b = $Integer::parseInt($(str->substring(i * 2, i * 3)), 16);
		} catch ($NumberFormatException& nfe) {
			return nullptr;
		}
		if (i == 4) {
			return $new($ColorUIResource, r / 65535.0f, g / 65535.0f, b / 65535.0f);
		} else if (i == 1) {
			return $new($ColorUIResource, r / 15.0f, g / 15.0f, b / 15.0f);
		} else if (i == 2) {
			return $new($ColorUIResource, r, g, b);
		} else {
			return $new($ColorUIResource, r / 4095.0f, g / 4095.0f, b / 4095.0f);
		}
	} else {
		return $XColors::lookupColor(str);
	}
}

void clinit$Metacity($Class* class$) {
	$useLocalCurrentObjectStackCache();
	Metacity::$assertionsDisabled = !Metacity::class$->desiredAssertionStatus();
	$assignStatic(Metacity::themeNames, $new($StringArray, {
		$(Metacity::getUserTheme()),
		"blueprint"_s,
		"Bluecurve"_s,
		"Crux"_s,
		"SwingFallbackTheme"_s
	}));
	{
		{
			$var($StringArray, arr$, Metacity::themeNames);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, themeName, arr$->get(i$));
				{
					if (themeName != nullptr) {
						try {
							$assignStatic(Metacity::INSTANCE, $new(Metacity, themeName));
						} catch ($FileNotFoundException& ex) {
						} catch ($IOException& ex) {
							Metacity::logError(themeName, static_cast<$Exception*>(ex));
						} catch ($ParserConfigurationException& ex) {
							Metacity::logError(themeName, static_cast<$Exception*>(ex));
						} catch ($SAXException& ex) {
							Metacity::logError(themeName, static_cast<$Exception*>(ex));
						}
					}
					if (Metacity::INSTANCE != nullptr) {
						break;
					}
				}
			}
		}
		if (Metacity::INSTANCE == nullptr) {
			$throwNew($Error, "Could not find any installed metacity theme, and fallback failed"_s);
		}
	}
	Metacity::errorLogged = false;
}

Metacity::Metacity() {
}

$Class* Metacity::load$($String* name, bool initialize) {
	$loadClass(Metacity, name, initialize, &_Metacity_ClassInfo_, clinit$Metacity, allocate$Metacity);
	return class$;
}

$Class* Metacity::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com