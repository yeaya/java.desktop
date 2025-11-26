#include <bug7030332.h>

#include <bug7030332$1.h>
#include <bug7030332$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/lang/Runnable.h>
#include <java/net/URL.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HTML_SAMPLES
#undef LEFT

using $bug7030332$1 = ::bug7030332$1;
using $bug7030332$2 = ::bug7030332$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridLayout = ::java::awt::GridLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug7030332_FieldInfo_[] = {
	{"HTML_SAMPLES", "[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug7030332, HTML_SAMPLES)},
	{}
};

$MethodInfo _bug7030332_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7030332::*)()>(&bug7030332::init$))},
	{"createContentPane", "()Ljava/awt/Container;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Container*(*)()>(&bug7030332::createContentPane))},
	{"init", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7030332::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7030332_InnerClassesInfo_[] = {
	{"bug7030332$2", nullptr, nullptr, 0},
	{"bug7030332$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7030332_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7030332",
	"javax.swing.JApplet",
	nullptr,
	_bug7030332_FieldInfo_,
	_bug7030332_MethodInfo_,
	nullptr,
	nullptr,
	_bug7030332_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7030332$2,bug7030332$1"
};

$Object* allocate$bug7030332($Class* clazz) {
	return $of($alloc(bug7030332));
}

$StringArray* bug7030332::HTML_SAMPLES = nullptr;

void bug7030332::init$() {
	$JApplet::init$();
}

void bug7030332::main($StringArray* args) {
	$init(bug7030332);
	$SwingUtilities::invokeLater($$new($bug7030332$1));
}

void bug7030332::init() {
	try {
		$SwingUtilities::invokeAndWait($$new($bug7030332$2, this));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

$Container* bug7030332::createContentPane() {
	$init(bug7030332);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($JPanel, result, $new($JPanel, static_cast<$LayoutManager*>($$new($GridLayout, $nc(bug7030332::HTML_SAMPLES)->length + 1, 3, 10, 10))));
	result->add(static_cast<$Component*>($$new($JLabel, "Html code"_s)));
	result->add(static_cast<$Component*>($$new($JLabel, "Golden image"_s)));
	result->add(static_cast<$Component*>($$new($JLabel, "JEditorPane"_s)));
	for (int32_t i = 0; i < $nc(bug7030332::HTML_SAMPLES)->length; ++i) {
		$var($String, htmlSample, $nc(bug7030332::HTML_SAMPLES)->get(i));
		$var($JTextArea, textArea, $new($JTextArea, htmlSample));
		textArea->setLineWrap(true);
		result->add(static_cast<$Component*>(textArea));
		$var($String, imageName, $str({"sample"_s, $$str(i), ".png"_s}));
		$var($URL, resource, bug7030332::class$->getResource(imageName));
		result->add(resource == nullptr ? static_cast<$Component*>($$new($JLabel, $$str({imageName, " not found"_s}))) : static_cast<$Component*>($$new($JLabel, static_cast<$Icon*>($$new($ImageIcon, resource)), $SwingConstants::LEFT)));
		result->add(static_cast<$Component*>($$new($JEditorPane, "text/html"_s, htmlSample)));
	}
	return result;
}

void clinit$bug7030332($Class* class$) {
	$assignStatic(bug7030332::HTML_SAMPLES, $new($StringArray, {
		"<table border><tr><th>Column1</th><th>Column2</th></tr></table>"_s,
		"<table border=\"\"><tr><th>Column1</th><th>Column2</th></tr></table>"_s,
		"<table border=\"1\"><tr><th>Column1</th><th>Column2</th></tr></table>"_s,
		"<table border=\"2\"><tr><th>Column1</th><th>Column2</th></tr></table>"_s
	}));
}

bug7030332::bug7030332() {
}

$Class* bug7030332::load$($String* name, bool initialize) {
	$loadClass(bug7030332, name, initialize, &_bug7030332_ClassInfo_, clinit$bug7030332, allocate$bug7030332);
	return class$;
}

$Class* bug7030332::class$ = nullptr;