#include <javax/swing/JEditorPane.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Rectangle.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/AbstractMap.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane$1.h>
#include <javax/swing/JEditorPane$2.h>
#include <javax/swing/JEditorPane$3.h>
#include <javax/swing/JEditorPane$AccessibleJEditorPane.h>
#include <javax/swing/JEditorPane$AccessibleJEditorPaneHTML.h>
#include <javax/swing/JEditorPane$HeaderParser.h>
#include <javax/swing/JEditorPane$PageLoader.h>
#include <javax/swing/JEditorPane$PlainEditorKit.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/SwingWorker.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/event/HyperlinkListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/ChangedCharSetException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$Iterator.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef A
#undef HONOR_DISPLAY_PROPERTIES
#undef NAME
#undef READ_LIMIT
#undef TRUE
#undef W3C_LENGTH_UNITS

using $EventListenerArray = $Array<::java::util::EventListener>;
using $HyperlinkListenerArray = $Array<::javax::swing::event::HyperlinkListener>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $AbstractMap = ::java::util::AbstractMap;
using $Enumeration = ::java::util::Enumeration;
using $EventListener = ::java::util::EventListener;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JEditorPane$1 = ::javax::swing::JEditorPane$1;
using $JEditorPane$2 = ::javax::swing::JEditorPane$2;
using $JEditorPane$3 = ::javax::swing::JEditorPane$3;
using $JEditorPane$AccessibleJEditorPane = ::javax::swing::JEditorPane$AccessibleJEditorPane;
using $JEditorPane$AccessibleJEditorPaneHTML = ::javax::swing::JEditorPane$AccessibleJEditorPaneHTML;
using $JEditorPane$HeaderParser = ::javax::swing::JEditorPane$HeaderParser;
using $JEditorPane$PageLoader = ::javax::swing::JEditorPane$PageLoader;
using $JEditorPane$PlainEditorKit = ::javax::swing::JEditorPane$PlainEditorKit;
using $JViewport = ::javax::swing::JViewport;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingWorker = ::javax::swing::SwingWorker;
using $UIManager = ::javax::swing::UIManager;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkListener = ::javax::swing::event::HyperlinkListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $ChangedCharSetException = ::javax::swing::text::ChangedCharSetException;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$Iterator = ::javax::swing::text::html::HTMLDocument$Iterator;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace swing {

$NamedAttribute JEditorPane_Attribute_var$0[] = {
	{"defaultProperty", 's', "UIClassID"},
	{"description", 's', "A text component to edit various types of content."},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JEditorPane_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JEditorPane_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JEditorPane_Attribute_var$1},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_getAccessibleContext9[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$2},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_getHyperlinkListeners15[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$3},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_getScrollableTracksViewportHeight22[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$4},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_getScrollableTracksViewportWidth23[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$5},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_getUIClassID26[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$6},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "the type of content"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_setContentType40[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$7},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$8[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "the currently installed kit for handling content"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_setEditorKit41[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$8},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$9[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "the URL used to set content"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_setPage43[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$9},
	{}
};

$NamedAttribute JEditorPane_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "the text of this component"},
	{}
};

$CompoundAttribute _JEditorPane_MethodAnnotations_setText45[] = {
	{"Ljava/beans/BeanProperty;", JEditorPane_Attribute_var$10},
	{}
};

$FieldInfo _JEditorPane_FieldInfo_[] = {
	{"pageLoader", "Ljavax/swing/SwingWorker;", "Ljavax/swing/SwingWorker<Ljava/net/URL;Ljava/lang/Object;>;", $PRIVATE, $field(JEditorPane, pageLoader)},
	{"kit", "Ljavax/swing/text/EditorKit;", nullptr, $PRIVATE, $field(JEditorPane, kit)},
	{"isUserSetEditorKit", "Z", nullptr, $PRIVATE, $field(JEditorPane, isUserSetEditorKit)},
	{"pageProperties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(JEditorPane, pageProperties)},
	{"PostDataProperty", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JEditorPane, PostDataProperty)},
	{"typeHandlers", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/EditorKit;>;", $PRIVATE, $field(JEditorPane, typeHandlers)},
	{"kitRegistryKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JEditorPane, kitRegistryKey)},
	{"kitTypeRegistryKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JEditorPane, kitTypeRegistryKey)},
	{"kitLoaderRegistryKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JEditorPane, kitLoaderRegistryKey)},
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JEditorPane, uiClassID)},
	{"W3C_LENGTH_UNITS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JEditorPane, W3C_LENGTH_UNITS)},
	{"HONOR_DISPLAY_PROPERTIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JEditorPane, HONOR_DISPLAY_PROPERTIES)},
	{"defaultEditorKitMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(JEditorPane, defaultEditorKitMap)},
	{}
};

$MethodInfo _JEditorPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPane::*)()>(&JEditorPane::init$))},
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPane::*)($URL*)>(&JEditorPane::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPane::*)($String*)>(&JEditorPane::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPane::*)($String*,$String*)>(&JEditorPane::init$))},
	{"access$000", "(Ljavax/swing/JEditorPane;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(JEditorPane*,$String*,Object$*,Object$*)>(&JEditorPane::access$000))},
	{"addHyperlinkListener", "(Ljavax/swing/event/HyperlinkListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"createDefaultEditorKit", "()Ljavax/swing/text/EditorKit;", nullptr, $PROTECTED},
	{"createEditorKitForContentType", "(Ljava/lang/String;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$EditorKit*(*)($String*)>(&JEditorPane::createEditorKitForContentType))},
	{"fireHyperlinkUpdate", "(Ljavax/swing/event/HyperlinkEvent;)V", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JEditorPane_MethodAnnotations_getAccessibleContext9},
	{"getAsynchronousLoadPriority", "(Ljavax/swing/text/Document;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JEditorPane::*)($Document*)>(&JEditorPane::getAsynchronousLoadPriority))},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(JEditorPane::*)()>(&JEditorPane::getContentType))},
	{"getEditorKit", "()Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC},
	{"getEditorKitClassNameForContentType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&JEditorPane::getEditorKitClassNameForContentType))},
	{"getEditorKitForContentType", "(Ljava/lang/String;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC},
	{"getHyperlinkListeners", "()[Ljavax/swing/event/HyperlinkListener;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, nullptr, nullptr, _JEditorPane_MethodAnnotations_getHyperlinkListeners15},
	{"getKitLoaderRegistry", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/ClassLoader;>;", $PRIVATE | $STATIC, $method(static_cast<$Hashtable*(*)()>(&JEditorPane::getKitLoaderRegistry))},
	{"getKitRegisty", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/EditorKit;>;", $PRIVATE | $STATIC, $method(static_cast<$Hashtable*(*)()>(&JEditorPane::getKitRegisty))},
	{"getKitTypeRegistry", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Hashtable*(*)()>(&JEditorPane::getKitTypeRegistry))},
	{"getPage", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getPostData", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(JEditorPane::*)()>(&JEditorPane::getPostData))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getScrollableTracksViewportHeight", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JEditorPane_MethodAnnotations_getScrollableTracksViewportHeight22},
	{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JEditorPane_MethodAnnotations_getScrollableTracksViewportWidth23},
	{"getStream", "(Ljava/net/URL;)Ljava/io/InputStream;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JEditorPane_MethodAnnotations_getUIClassID26},
	{"handleConnectionProperties", "(Ljava/net/URLConnection;)V", nullptr, $PRIVATE, $method(static_cast<void(JEditorPane::*)($URLConnection*)>(&JEditorPane::handleConnectionProperties))},
	{"handlePostData", "(Ljava/net/HttpURLConnection;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(JEditorPane::*)($HttpURLConnection*,Object$*)>(&JEditorPane::handlePostData)), "java.io.IOException"},
	{"initializeModel", "(Ljavax/swing/text/EditorKit;Ljava/net/URL;)Ljavax/swing/text/Document;", nullptr, $PRIVATE, $method(static_cast<$Document*(JEditorPane::*)($EditorKit*,$URL*)>(&JEditorPane::initializeModel))},
	{"loadDefaultKitsIfNecessary", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JEditorPane::loadDefaultKitsIfNecessary))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"read", "(Ljava/io/InputStream;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/io/InputStream;Ljavax/swing/text/Document;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"registerEditorKitForContentType", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&JEditorPane::registerEditorKitForContentType))},
	{"registerEditorKitForContentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*,$ClassLoader*)>(&JEditorPane::registerEditorKitForContentType))},
	{"removeHyperlinkListener", "(Ljavax/swing/event/HyperlinkListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"replaceSelection", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"scrollToReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setCharsetFromContentTypeParameters", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(JEditorPane::*)($String*)>(&JEditorPane::setCharsetFromContentTypeParameters))},
	{"setContentType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JEditorPane::*)($String*)>(&JEditorPane::setContentType)), nullptr, nullptr, _JEditorPane_MethodAnnotations_setContentType40},
	{"setEditorKit", "(Ljavax/swing/text/EditorKit;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JEditorPane_MethodAnnotations_setEditorKit41},
	{"setEditorKitForContentType", "(Ljava/lang/String;Ljavax/swing/text/EditorKit;)V", nullptr, $PUBLIC},
	{"setPage", "(Ljava/net/URL;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException", nullptr, _JEditorPane_MethodAnnotations_setPage43},
	{"setPage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JEditorPane_MethodAnnotations_setText45},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JEditorPane::*)($ObjectOutputStream*)>(&JEditorPane::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JEditorPane_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$HeaderParser", "javax.swing.JEditorPane", "HeaderParser", $STATIC},
	{"javax.swing.JEditorPane$PlainEditorKit", "javax.swing.JEditorPane", "PlainEditorKit", $STATIC},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "javax.swing.JEditorPane", "JEditorPaneAccessibleHypertextSupport", $PROTECTED},
	{"javax.swing.JEditorPane$AccessibleJEditorPaneHTML", "javax.swing.JEditorPane", "AccessibleJEditorPaneHTML", $PROTECTED},
	{"javax.swing.JEditorPane$AccessibleJEditorPane", "javax.swing.JEditorPane", "AccessibleJEditorPane", $PROTECTED},
	{"javax.swing.JEditorPane$PageLoader", "javax.swing.JEditorPane", "PageLoader", 0},
	{"javax.swing.JEditorPane$3", nullptr, nullptr, 0},
	{"javax.swing.JEditorPane$2", nullptr, nullptr, 0},
	{"javax.swing.JEditorPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JEditorPane",
	"javax.swing.text.JTextComponent",
	nullptr,
	_JEditorPane_FieldInfo_,
	_JEditorPane_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane_InnerClassesInfo_,
	_JEditorPane_Annotations_,
	nullptr,
	"javax.swing.JEditorPane$HeaderParser,javax.swing.JEditorPane$PlainEditorKit,javax.swing.JEditorPane$PlainEditorKit$PlainParagraph,javax.swing.JEditorPane$PlainEditorKit$PlainParagraph$LogicalView,javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport,javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector,javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink,javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$1,javax.swing.JEditorPane$AccessibleJEditorPaneHTML,javax.swing.JEditorPane$AccessibleJEditorPane,javax.swing.JEditorPane$PageLoader,javax.swing.JEditorPane$PageLoader$3,javax.swing.JEditorPane$PageLoader$2,javax.swing.JEditorPane$PageLoader$1,javax.swing.JEditorPane$3,javax.swing.JEditorPane$2,javax.swing.JEditorPane$1"
};

$Object* allocate$JEditorPane($Class* clazz) {
	return $of($alloc(JEditorPane));
}

$String* JEditorPane::PostDataProperty = nullptr;
$Object* JEditorPane::kitRegistryKey = nullptr;
$Object* JEditorPane::kitTypeRegistryKey = nullptr;
$Object* JEditorPane::kitLoaderRegistryKey = nullptr;
$String* JEditorPane::uiClassID = nullptr;
$String* JEditorPane::W3C_LENGTH_UNITS = nullptr;
$String* JEditorPane::HONOR_DISPLAY_PROPERTIES = nullptr;
$Map* JEditorPane::defaultEditorKitMap = nullptr;

void JEditorPane::access$000(JEditorPane* x0, $String* x1, Object$* x2, Object$* x3) {
	$init(JEditorPane);
	$nc(x0)->firePropertyChange(x1, x2, x3);
}

void JEditorPane::init$() {
	$useLocalCurrentObjectStackCache();
	$JTextComponent::init$();
	setFocusCycleRoot(true);
	setFocusTraversalPolicy($$new($JEditorPane$1, this));
	$LookAndFeel::installProperty(this, "focusTraversalKeysForward"_s, $($JComponent::getManagingFocusForwardTraversalKeys()));
	$LookAndFeel::installProperty(this, "focusTraversalKeysBackward"_s, $($JComponent::getManagingFocusBackwardTraversalKeys()));
}

void JEditorPane::init$($URL* initialPage) {
	JEditorPane::init$();
	setPage(initialPage);
}

void JEditorPane::init$($String* url) {
	JEditorPane::init$();
	setPage(url);
}

void JEditorPane::init$($String* type, $String* text) {
	JEditorPane::init$();
	setContentType(type);
	setText(text);
}

void JEditorPane::addHyperlinkListener($HyperlinkListener* listener) {
	$synchronized(this) {
		$load($HyperlinkListener);
		$nc(this->listenerList)->add($HyperlinkListener::class$, listener);
	}
}

void JEditorPane::removeHyperlinkListener($HyperlinkListener* listener) {
	$synchronized(this) {
		$load($HyperlinkListener);
		$nc(this->listenerList)->remove($HyperlinkListener::class$, listener);
	}
}

$HyperlinkListenerArray* JEditorPane::getHyperlinkListeners() {
	$synchronized(this) {
		$load($HyperlinkListener);
		return $fcast($HyperlinkListenerArray, $nc(this->listenerList)->getListeners($HyperlinkListener::class$));
	}
}

void JEditorPane::fireHyperlinkUpdate($HyperlinkEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($HyperlinkListener);
		if ($equals(listeners->get(i), $HyperlinkListener::class$)) {
			$nc(($cast($HyperlinkListener, listeners->get(i + 1))))->hyperlinkUpdate(e);
		}
	}
}

void JEditorPane::setPage($URL* page) {
	$useLocalCurrentObjectStackCache();
	if (page == nullptr) {
		$throwNew($IOException, "invalid url"_s);
	}
	$var($URL, loaded, getPage());
	bool var$0 = !$nc(page)->equals(loaded);
	if (var$0 && page->getRef() == nullptr) {
		scrollRectToVisible($$new($Rectangle, 0, 0, 1, 1));
	}
	bool reloaded = false;
	$var($Object, postData, getPostData());
	if ((loaded == nullptr) || !$nc(loaded)->sameFile(page) || (postData != nullptr)) {
		int32_t p = getAsynchronousLoadPriority($(getDocument()));
		if (p < 0) {
			$var($InputStream, in, getStream(page));
			if (this->kit != nullptr) {
				$var($Document, doc, initializeModel(this->kit, page));
				p = getAsynchronousLoadPriority(doc);
				if (p >= 0) {
					setDocument(doc);
					$synchronized(this) {
						$set(this, pageLoader, $new($JEditorPane$PageLoader, this, doc, in, loaded, page));
						$nc(this->pageLoader)->execute();
					}
					return;
				}
				read(in, doc);
				setDocument(doc);
				reloaded = true;
			}
		} else {
			if (this->pageLoader != nullptr) {
				$nc(this->pageLoader)->cancel(true);
			}
			$set(this, pageLoader, $new($JEditorPane$PageLoader, this, nullptr, nullptr, loaded, page));
			$nc(this->pageLoader)->execute();
			return;
		}
	}
	$var($String, reference, $nc(page)->getRef());
	if (reference != nullptr) {
		if (!reloaded) {
			scrollToReference(reference);
		} else {
			$SwingUtilities::invokeLater($$new($JEditorPane$2, this, reference));
		}
		$init($Document);
		$nc($(getDocument()))->putProperty($Document::StreamDescriptionProperty, page);
	}
	firePropertyChange("page"_s, $of(loaded), $of(page));
}

$Document* JEditorPane::initializeModel($EditorKit* kit, $URL* page) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(kit)->createDefaultDocument());
	if (this->pageProperties != nullptr) {
		{
			$var($Enumeration, e, $nc(this->pageProperties)->keys());
			for (; $nc(e)->hasMoreElements();) {
				$var($String, key, $cast($String, e->nextElement()));
				$nc(doc)->putProperty(key, $($nc(this->pageProperties)->get(key)));
			}
		}
		$nc(this->pageProperties)->clear();
	}
	$init($Document);
	if ($nc(doc)->getProperty($Document::StreamDescriptionProperty) == nullptr) {
		doc->putProperty($Document::StreamDescriptionProperty, page);
	}
	return doc;
}

int32_t JEditorPane::getAsynchronousLoadPriority($Document* doc) {
	return ($instanceOf($AbstractDocument, doc) ? $nc(($cast($AbstractDocument, doc)))->getAsynchronousLoadPriority() : -1);
}

void JEditorPane::read($InputStream* in, Object$* desc) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($HTMLDocument, desc) && $instanceOf($HTMLEditorKit, this->kit)) {
		$var($HTMLDocument, hdoc, $cast($HTMLDocument, desc));
		setDocument(static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(hdoc))));
		read(in, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(hdoc))));
	} else {
		$var($String, charset, $cast($String, getClientProperty("charset"_s)));
		$var($Reader, r, (charset != nullptr) ? static_cast<$Reader*>($new($InputStreamReader, in, charset)) : static_cast<$Reader*>($new($InputStreamReader, in)));
		$JTextComponent::read(r, desc);
	}
}

void JEditorPane::read($InputStream* in$renamed, $Document* doc) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, in, in$renamed);
	$init($Boolean);
	if (!$nc($Boolean::TRUE)->equals($($nc(doc)->getProperty("IgnoreCharsetDirective"_s)))) {
		int32_t READ_LIMIT = 1024 * 10;
		$assign(in, $new($BufferedInputStream, in, READ_LIMIT));
		in->mark(READ_LIMIT);
	}
	$var($String, charset, $cast($String, getClientProperty("charset"_s)));
	try {
		$var($Reader, r, (charset != nullptr) ? static_cast<$Reader*>($new($InputStreamReader, in, charset)) : static_cast<$Reader*>($new($InputStreamReader, in)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(this->kit)->read(r, doc, 0);
				} catch ($Throwable& t$) {
					if (r != nullptr) {
						try {
							r->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (r != nullptr) {
					r->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($BadLocationException& e) {
		$throwNew($IOException, $(e->getMessage()));
	} catch ($ChangedCharSetException& changedCharSetException) {
		$var($String, charSetSpec, changedCharSetException->getCharSetSpec());
		if (changedCharSetException->keyEqualsCharSet()) {
			putClientProperty("charset"_s, charSetSpec);
		} else {
			setCharsetFromContentTypeParameters(charSetSpec);
		}
		try {
			$nc(in)->reset();
		} catch ($IOException& exception) {
			$nc(in)->close();
			$var($URL, url, $cast($URL, $nc(doc)->getProperty($Document::StreamDescriptionProperty)));
			if (url != nullptr) {
				$var($URLConnection, conn, url->openConnection());
				$assign(in, $nc(conn)->getInputStream());
			} else {
				$throw(changedCharSetException);
			}
		}
		try {
			$nc(doc)->remove(0, doc->getLength());
		} catch ($BadLocationException& e) {
		}
		$nc(doc)->putProperty("IgnoreCharsetDirective"_s, $($Boolean::valueOf(true)));
		read(in, doc);
	}
}

$InputStream* JEditorPane::getStream($URL* page$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($URL, page, page$renamed);
	$var($URLConnection, conn, $nc(page)->openConnection());
	if ($instanceOf($HttpURLConnection, conn)) {
		$var($HttpURLConnection, hconn, $cast($HttpURLConnection, conn));
		$nc(hconn)->setInstanceFollowRedirects(false);
		$var($Object, postData, getPostData());
		if (postData != nullptr) {
			handlePostData(hconn, postData);
		}
		int32_t response = hconn->getResponseCode();
		bool redirect = (response >= 300 && response <= 399);
		if (redirect) {
			$var($String, loc, $nc(conn)->getHeaderField("Location"_s));
			if ($nc(loc)->startsWith("http"_s, 0)) {
				$assign(page, $new($URL, loc));
			} else {
				$assign(page, $new($URL, page, loc));
			}
			return getStream(page);
		}
	}
	if ($SwingUtilities::isEventDispatchThread()) {
		handleConnectionProperties(conn);
	} else {
		try {
			$SwingUtilities::invokeAndWait($$new($JEditorPane$3, this, conn));
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		} catch ($InvocationTargetException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
	return $nc(conn)->getInputStream();
}

void JEditorPane::handleConnectionProperties($URLConnection* conn) {
	$useLocalCurrentObjectStackCache();
	if (this->pageProperties == nullptr) {
		$set(this, pageProperties, $new($Hashtable));
	}
	$var($String, type, $nc(conn)->getContentType());
	if (type != nullptr) {
		setContentType(type);
		$nc(this->pageProperties)->put("content-type"_s, type);
	}
	$init($Document);
	$nc(this->pageProperties)->put($Document::StreamDescriptionProperty, $(conn->getURL()));
	$var($String, enc, conn->getContentEncoding());
	if (enc != nullptr) {
		$nc(this->pageProperties)->put("content-encoding"_s, enc);
	}
}

$Object* JEditorPane::getPostData() {
	return $of($nc($(getDocument()))->getProperty(JEditorPane::PostDataProperty));
}

void JEditorPane::handlePostData($HttpURLConnection* conn, Object$* postData) {
	$useLocalCurrentObjectStackCache();
	$nc(conn)->setDoOutput(true);
	$var($DataOutputStream, os, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			conn->setRequestProperty("Content-Type"_s, "application/x-www-form-urlencoded"_s);
			$assign(os, $new($DataOutputStream, $(conn->getOutputStream())));
			os->writeBytes($cast($String, postData));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (os != nullptr) {
				os->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JEditorPane::scrollToReference($String* reference) {
	$useLocalCurrentObjectStackCache();
	$var($Document, d, getDocument());
	if ($instanceOf($HTMLDocument, d)) {
		$var($HTMLDocument, doc, $cast($HTMLDocument, d));
		$init($HTML$Tag);
		$var($HTMLDocument$Iterator, iter, $nc(doc)->getIterator($HTML$Tag::A));
		for (; $nc(iter)->isValid(); $nc(iter)->next()) {
			$var($AttributeSet, a, iter->getAttributes());
			$init($HTML$Attribute);
			$var($String, nm, $cast($String, $nc(a)->getAttribute($HTML$Attribute::NAME)));
			if ((nm != nullptr) && nm->equals(reference)) {
				try {
					int32_t pos = iter->getStartOffset();
					$var($Rectangle, r, modelToView(pos));
					if (r != nullptr) {
						$var($Rectangle, vis, getVisibleRect());
						r->height = $nc(vis)->height;
						scrollRectToVisible(r);
						setCaretPosition(pos);
					}
				} catch ($BadLocationException& ble) {
					$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
				}
			}
		}
	}
}

$URL* JEditorPane::getPage() {
	$init($Document);
	return $cast($URL, $nc($(getDocument()))->getProperty($Document::StreamDescriptionProperty));
}

void JEditorPane::setPage($String* url) {
	if (url == nullptr) {
		$throwNew($IOException, "invalid url"_s);
	}
	$var($URL, page, $new($URL, url));
	setPage(page);
}

$String* JEditorPane::getUIClassID() {
	return JEditorPane::uiClassID;
}

$EditorKit* JEditorPane::createDefaultEditorKit() {
	return $new($JEditorPane$PlainEditorKit);
}

$EditorKit* JEditorPane::getEditorKit() {
	if (this->kit == nullptr) {
		$set(this, kit, createDefaultEditorKit());
		this->isUserSetEditorKit = false;
	}
	return this->kit;
}

$String* JEditorPane::getContentType() {
	return (this->kit != nullptr) ? $nc(this->kit)->getContentType() : ($String*)nullptr;
}

void JEditorPane::setContentType($String* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, type$renamed);
	int32_t parm = $nc(type)->indexOf((int32_t)u';');
	if (parm > -1) {
		$var($String, paramList, type->substring(parm));
		$assign(type, $(type->substring(0, parm))->trim());
		if ($(type->toLowerCase())->startsWith("text/"_s)) {
			setCharsetFromContentTypeParameters(paramList);
		}
	}
	if ((this->kit == nullptr) || (!type->equals($($nc(this->kit)->getContentType()))) || !this->isUserSetEditorKit) {
		$var($EditorKit, k, getEditorKitForContentType(type));
		if (k != nullptr && k != this->kit) {
			setEditorKit(k);
			this->isUserSetEditorKit = false;
		}
	}
}

void JEditorPane::setCharsetFromContentTypeParameters($String* paramlist$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, paramlist, paramlist$renamed);
	$var($String, charset, nullptr);
	try {
		int32_t semi = $nc(paramlist)->indexOf((int32_t)u';');
		if (semi > -1 && semi < paramlist->length() - 1) {
			$assign(paramlist, paramlist->substring(semi + 1));
		}
		if (paramlist->length() > 0) {
			$var($JEditorPane$HeaderParser, hdrParser, $new($JEditorPane$HeaderParser, paramlist));
			$assign(charset, hdrParser->findValue("charset"_s));
			if (charset != nullptr) {
				putClientProperty("charset"_s, charset);
			}
		}
	} catch ($IndexOutOfBoundsException& e) {
	} catch ($NullPointerException& e) {
	} catch ($Exception& e) {
		$nc($System::err)->println($$str({"JEditorPane.getCharsetFromContentTypeParameters failed on: "_s, paramlist}));
		e->printStackTrace();
	}
}

void JEditorPane::setEditorKit($EditorKit* kit) {
	$useLocalCurrentObjectStackCache();
	$var($EditorKit, old, this->kit);
	this->isUserSetEditorKit = true;
	if (old != nullptr) {
		old->deinstall(this);
	}
	$set(this, kit, kit);
	if (this->kit != nullptr) {
		$nc(this->kit)->install(this);
		setDocument($($nc(this->kit)->createDefaultDocument()));
	}
	firePropertyChange("editorKit"_s, $of(old), $of(kit));
}

$EditorKit* JEditorPane::getEditorKitForContentType($String* type) {
	if (this->typeHandlers == nullptr) {
		$set(this, typeHandlers, $new($Hashtable, 3));
	}
	$var($EditorKit, k, $cast($EditorKit, $nc(this->typeHandlers)->get(type)));
	if (k == nullptr) {
		$assign(k, createEditorKitForContentType(type));
		if (k != nullptr) {
			setEditorKitForContentType(type, k);
		}
	}
	if (k == nullptr) {
		$assign(k, createDefaultEditorKit());
	}
	return k;
}

void JEditorPane::setEditorKitForContentType($String* type, $EditorKit* k) {
	if (this->typeHandlers == nullptr) {
		$set(this, typeHandlers, $new($Hashtable, 3));
	}
	$nc(this->typeHandlers)->put(type, k);
}

void JEditorPane::replaceSelection($String* content) {
	$useLocalCurrentObjectStackCache();
	if (!isEditable()) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
		return;
	}
	$var($EditorKit, kit, getEditorKit());
	if ($instanceOf($StyledEditorKit, kit)) {
		try {
			$var($Document, doc, getDocument());
			$var($Caret, caret, getCaret());
			bool composedTextSaved = saveComposedText($nc(caret)->getDot());
			int32_t var$0 = $nc(caret)->getDot();
			int32_t p0 = $Math::min(var$0, caret->getMark());
			int32_t var$1 = $nc(caret)->getDot();
			int32_t p1 = $Math::max(var$1, caret->getMark());
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->replace(p0, p1 - p0, content, $($nc(($cast($StyledEditorKit, kit)))->getInputAttributes()));
			} else {
				if (p0 != p1) {
					$nc(doc)->remove(p0, p1 - p0);
				}
				if (content != nullptr && content->length() > 0) {
					$nc(doc)->insertString(p0, content, $($nc(($cast($StyledEditorKit, kit)))->getInputAttributes()));
				}
			}
			if (composedTextSaved) {
				restoreComposedText();
			}
		} catch ($BadLocationException& e) {
			$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
		}
	} else {
		$JTextComponent::replaceSelection(content);
	}
}

$EditorKit* JEditorPane::createEditorKitForContentType($String* type) {
	$init(JEditorPane);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Hashtable, kitRegistry, getKitRegisty());
	$var($EditorKit, k, $cast($EditorKit, $nc(kitRegistry)->get(type)));
	if (k == nullptr) {
		$var($String, classname, $cast($String, $nc($(getKitTypeRegistry()))->get(type)));
		$var($ClassLoader, loader, $cast($ClassLoader, $nc($(getKitLoaderRegistry()))->get(type)));
		try {
			$Class* c = nullptr;
			if (loader != nullptr) {
				$ReflectUtil::checkPackageAccess(classname);
				c = loader->loadClass(classname);
			} else {
				c = $SwingUtilities::loadSystemClass(classname);
			}
			$assign(k, $cast($EditorKit, $nc(c)->newInstance()));
			kitRegistry->put(type, k);
		} catch ($Throwable& e) {
			$assign(k, nullptr);
		}
	}
	if (k != nullptr) {
		return $cast($EditorKit, k->clone());
	}
	return nullptr;
}

void JEditorPane::registerEditorKitForContentType($String* type, $String* classname) {
	$init(JEditorPane);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	registerEditorKitForContentType(type, classname, $($($Thread::currentThread())->getContextClassLoader()));
}

void JEditorPane::registerEditorKitForContentType($String* type, $String* classname, $ClassLoader* loader) {
	$init(JEditorPane);
	$useLocalCurrentObjectStackCache();
	$nc($(getKitTypeRegistry()))->put(type, classname);
	if (loader != nullptr) {
		$nc($(getKitLoaderRegistry()))->put(type, loader);
	} else {
		$nc($(getKitLoaderRegistry()))->remove(type);
	}
	$nc($(getKitRegisty()))->remove(type);
}

$String* JEditorPane::getEditorKitClassNameForContentType($String* type) {
	$init(JEditorPane);
	return $cast($String, $nc($(getKitTypeRegistry()))->get(type));
}

$Hashtable* JEditorPane::getKitTypeRegistry() {
	$init(JEditorPane);
	loadDefaultKitsIfNecessary();
	$var($Hashtable, tmp, $cast($Hashtable, $SwingUtilities::appContextGet(JEditorPane::kitTypeRegistryKey)));
	return tmp;
}

$Hashtable* JEditorPane::getKitLoaderRegistry() {
	$init(JEditorPane);
	loadDefaultKitsIfNecessary();
	$var($Hashtable, tmp, $cast($Hashtable, $SwingUtilities::appContextGet(JEditorPane::kitLoaderRegistryKey)));
	return tmp;
}

$Hashtable* JEditorPane::getKitRegisty() {
	$init(JEditorPane);
	$var($Hashtable, ht, $cast($Hashtable, $SwingUtilities::appContextGet(JEditorPane::kitRegistryKey)));
	if (ht == nullptr) {
		$assign(ht, $new($Hashtable, 3));
		$SwingUtilities::appContextPut(JEditorPane::kitRegistryKey, ht);
	}
	return ht;
}

void JEditorPane::loadDefaultKitsIfNecessary() {
	$init(JEditorPane);
	$useLocalCurrentObjectStackCache();
	if ($SwingUtilities::appContextGet(JEditorPane::kitTypeRegistryKey) == nullptr) {
		$synchronized(JEditorPane::defaultEditorKitMap) {
			if ($nc(JEditorPane::defaultEditorKitMap)->size() == 0) {
				$nc(JEditorPane::defaultEditorKitMap)->put("text/plain"_s, "javax.swing.JEditorPane$PlainEditorKit"_s);
				$nc(JEditorPane::defaultEditorKitMap)->put("text/html"_s, "javax.swing.text.html.HTMLEditorKit"_s);
				$nc(JEditorPane::defaultEditorKitMap)->put("text/rtf"_s, "javax.swing.text.rtf.RTFEditorKit"_s);
				$nc(JEditorPane::defaultEditorKitMap)->put("application/rtf"_s, "javax.swing.text.rtf.RTFEditorKit"_s);
			}
		}
		$var($Hashtable, ht, $new($Hashtable));
		$SwingUtilities::appContextPut(JEditorPane::kitTypeRegistryKey, ht);
		$assign(ht, $new($Hashtable));
		$SwingUtilities::appContextPut(JEditorPane::kitLoaderRegistryKey, ht);
		{
			$var($Iterator, i$, $nc($($nc(JEditorPane::defaultEditorKitMap)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					registerEditorKitForContentType(key, $cast($String, $($nc(JEditorPane::defaultEditorKitMap)->get(key))));
				}
			}
		}
	}
}

$Dimension* JEditorPane::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $JTextComponent::getPreferredSize());
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		$var($JViewport, port, $cast($JViewport, parent));
		$var($TextUI, ui, $cast($TextUI, getUI()));
		int32_t prefWidth = $nc(d)->width;
		int32_t prefHeight = d->height;
		if (!getScrollableTracksViewportWidth()) {
			int32_t w = $nc(port)->getWidth();
			$var($Dimension, min, $nc(ui)->getMinimumSize(this));
			if (w != 0 && w < $nc(min)->width) {
				prefWidth = min->width;
			}
		}
		if (!getScrollableTracksViewportHeight()) {
			int32_t h = $nc(port)->getHeight();
			$var($Dimension, min, $nc(ui)->getMinimumSize(this));
			if (h != 0 && h < $nc(min)->height) {
				prefHeight = min->height;
			}
		}
		if (prefWidth != d->width || prefHeight != d->height) {
			$assign(d, $new($Dimension, prefWidth, prefHeight));
		}
	}
	return d;
}

void JEditorPane::setText($String* t) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Document, doc, getDocument());
		$nc(doc)->remove(0, doc->getLength());
		if (t == nullptr || $nc(t)->isEmpty()) {
			return;
		}
		$var($Reader, r, $new($StringReader, t));
		$var($EditorKit, kit, getEditorKit());
		$nc(kit)->read(r, doc, 0);
	} catch ($IOException& ioe) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
	} catch ($BadLocationException& ble) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
	}
}

$String* JEditorPane::getText() {
	$useLocalCurrentObjectStackCache();
	$var($String, txt, nullptr);
	try {
		$var($StringWriter, buf, $new($StringWriter));
		write(buf);
		$assign(txt, buf->toString());
	} catch ($IOException& ioe) {
		$assign(txt, nullptr);
	}
	return txt;
}

bool JEditorPane::getScrollableTracksViewportWidth() {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		$var($JViewport, port, $cast($JViewport, parent));
		$var($TextUI, ui, $cast($TextUI, getUI()));
		int32_t w = $nc(port)->getWidth();
		$var($Dimension, min, $nc(ui)->getMinimumSize(this));
		$var($Dimension, max, ui->getMaximumSize(this));
		if ((w >= $nc(min)->width) && (w <= $nc(max)->width)) {
			return true;
		}
	}
	return false;
}

bool JEditorPane::getScrollableTracksViewportHeight() {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		$var($JViewport, port, $cast($JViewport, parent));
		$var($TextUI, ui, $cast($TextUI, getUI()));
		int32_t h = $nc(port)->getHeight();
		$var($Dimension, min, $nc(ui)->getMinimumSize(this));
		if (h >= $nc(min)->height) {
			$var($Dimension, max, ui->getMaximumSize(this));
			if (h <= $nc(max)->height) {
				return true;
			}
		}
	}
	return false;
}

void JEditorPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JEditorPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JEditorPane::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, kitString, this->kit != nullptr ? $nc($of(this->kit))->toString() : ""_s);
	$var($String, typeHandlersString, this->typeHandlers != nullptr ? $nc(this->typeHandlers)->toString() : ""_s);
	return $str({$($JTextComponent::paramString()), ",kit="_s, kitString, ",typeHandlers="_s, typeHandlersString});
}

$AccessibleContext* JEditorPane::getAccessibleContext() {
	if ($instanceOf($HTMLEditorKit, $(getEditorKit()))) {
		$load($JEditorPane$AccessibleJEditorPaneHTML);
		if (this->accessibleContext == nullptr || $nc($of(this->accessibleContext))->getClass() != $JEditorPane$AccessibleJEditorPaneHTML::class$) {
			$set(this, accessibleContext, $new($JEditorPane$AccessibleJEditorPaneHTML, this));
		}
	} else {
		$load($JEditorPane$AccessibleJEditorPane);
		if (this->accessibleContext == nullptr || $nc($of(this->accessibleContext))->getClass() != $JEditorPane$AccessibleJEditorPane::class$) {
			$set(this, accessibleContext, $new($JEditorPane$AccessibleJEditorPane, this));
		}
	}
	return this->accessibleContext;
}

void clinit$JEditorPane($Class* class$) {
	$assignStatic(JEditorPane::PostDataProperty, "javax.swing.JEditorPane.postdata"_s);
	$assignStatic(JEditorPane::uiClassID, "EditorPaneUI"_s);
	$assignStatic(JEditorPane::W3C_LENGTH_UNITS, "JEditorPane.w3cLengthUnits"_s);
	$assignStatic(JEditorPane::HONOR_DISPLAY_PROPERTIES, "JEditorPane.honorDisplayProperties"_s);
	$assignStatic(JEditorPane::kitRegistryKey, $new($StringBuffer, "JEditorPane.kitRegistry"_s));
	$assignStatic(JEditorPane::kitTypeRegistryKey, $new($StringBuffer, "JEditorPane.kitTypeRegistry"_s));
	$assignStatic(JEditorPane::kitLoaderRegistryKey, $new($StringBuffer, "JEditorPane.kitLoaderRegistry"_s));
	$assignStatic(JEditorPane::defaultEditorKitMap, $new($HashMap, 0));
}

JEditorPane::JEditorPane() {
}

$Class* JEditorPane::load$($String* name, bool initialize) {
	$loadClass(JEditorPane, name, initialize, &_JEditorPane_ClassInfo_, clinit$JEditorPane, allocate$JEditorPane);
	return class$;
}

$Class* JEditorPane::class$ = nullptr;

	} // swing
} // javax