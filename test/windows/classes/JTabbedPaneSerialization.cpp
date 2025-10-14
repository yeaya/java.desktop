#include <JTabbedPaneSerialization.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$MethodInfo _JTabbedPaneSerialization_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTabbedPaneSerialization::*)()>(&JTabbedPaneSerialization::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTabbedPaneSerialization::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _JTabbedPaneSerialization_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTabbedPaneSerialization",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JTabbedPaneSerialization_MethodInfo_
};

$Object* allocate$JTabbedPaneSerialization($Class* clazz) {
	return $of($alloc(JTabbedPaneSerialization));
}

void JTabbedPaneSerialization::init$() {
}

void JTabbedPaneSerialization::main($StringArray* args) {
	$var($JTabbedPane, tabbedPane, $new($JTabbedPane));
	tabbedPane->addTab("Tab1"_s, $$new($JLabel, "Label1"_s));
	tabbedPane->addTab("Tab2"_s, $$new($JLabel, "Label2"_s));
	tabbedPane->addTab("Tab3"_s, $$new($JLabel, "Label3"_s));
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, out, $new($ObjectOutputStream, baos));
	out->writeObject(tabbedPane);
	out->close();
	$var($bytes, bytes, baos->toByteArray());
	$var($ByteArrayInputStream, is, $new($ByteArrayInputStream, bytes));
	$var($ObjectInputStream, oin, $new($ObjectInputStream, is));
	$var($JTabbedPane, readPane, $cast($JTabbedPane, oin->readObject()));
	$init($System);
	$nc($System::out)->println($$str({"readPane: "_s, $($nc(readPane)->toString())}));
	oin->close();
	int32_t var$0 = tabbedPane->getTabCount();
	if (var$0 != $nc(readPane)->getTabCount()) {
		$nc($System::out)->println($$str({"tabbedPane.tabCount "_s, $$str(tabbedPane->getTabCount())}));
		$nc($System::out)->println($$str({"readPane.tabCount "_s, $$str(readPane->getTabCount())}));
		$throwNew($RuntimeException, "Number of pages/tab of JTabbedPane is not deserialized"_s);
	}
}

JTabbedPaneSerialization::JTabbedPaneSerialization() {
}

$Class* JTabbedPaneSerialization::load$($String* name, bool initialize) {
	$loadClass(JTabbedPaneSerialization, name, initialize, &_JTabbedPaneSerialization_ClassInfo_, allocate$JTabbedPaneSerialization);
	return class$;
}

$Class* JTabbedPaneSerialization::class$ = nullptr;