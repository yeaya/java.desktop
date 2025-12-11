#include <bug7193219.h>

#include <bug7193219$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug7193219$1 = ::bug7193219$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$MethodInfo _bug7193219_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7193219::*)()>(&bug7193219::init$))},
	{"deserializeGUI", "([B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*)>(&bug7193219::deserializeGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7193219::main)), "java.lang.Exception"},
	{"serializeGUI", "()[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)()>(&bug7193219::serializeGUI))},
	{}
};

$InnerClassInfo _bug7193219_InnerClassesInfo_[] = {
	{"bug7193219$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7193219_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7193219",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug7193219_MethodInfo_,
	nullptr,
	nullptr,
	_bug7193219_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7193219$1"
};

$Object* allocate$bug7193219($Class* clazz) {
	return $of($alloc(bug7193219));
}

void bug7193219::init$() {
}

$bytes* bug7193219::serializeGUI() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame, "Serialization"_s));
	$var($JPanel, mainPanel, $new($JPanel));
	$var($JComboBox, status, $new($JComboBox));
	status->addItem("123"_s);
	mainPanel->add(static_cast<$Component*>(status));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(mainPanel));
	frame->pack();
	try {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
		oos->writeObject(mainPanel);
		oos->flush();
		frame->dispose();
		return baos->toByteArray();
	} catch ($IOException& ioe) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ioe));
	}
	$shouldNotReachHere();
}

void bug7193219::deserializeGUI($bytes* serializedData) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, serializedData)));
		$var($JPanel, mainPanel, $cast($JPanel, ois->readObject()));
		$var($JFrame, frame, $new($JFrame, "Deserialization"_s));
		$nc($(frame->getContentPane()))->add(static_cast<$Component*>(mainPanel));
		frame->pack();
		frame->dispose();
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug7193219::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug7193219$1));
}

bug7193219::bug7193219() {
}

$Class* bug7193219::load$($String* name, bool initialize) {
	$loadClass(bug7193219, name, initialize, &_bug7193219_ClassInfo_, allocate$bug7193219);
	return class$;
}

$Class* bug7193219::class$ = nullptr;