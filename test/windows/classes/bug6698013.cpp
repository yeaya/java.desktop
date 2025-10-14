#include <bug6698013.h>

#include <VirtualFile.h>
#include <VirtualFileSystemView.h>
#include <java/awt/Component.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $VirtualFile = ::VirtualFile;
using $VirtualFileSystemView = ::VirtualFileSystemView;
using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JApplet = ::javax::swing::JApplet;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

class bug6698013$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6698013$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6698013::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6698013$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6698013$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6698013$$Lambda$lambda$main$0::*)()>(&bug6698013$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6698013$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6698013$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6698013$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6698013$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6698013$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6698013_FieldInfo_[] = {
	{"root", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, root)},
	{"rootFile", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, rootFile)},
	{"subdir", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, subdir)},
	{"subdirFile", "LVirtualFile;", nullptr, $STATIC | $FINAL, $staticField(bug6698013, subdirFile)},
	{}
};

$MethodInfo _bug6698013_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6698013::*)()>(&bug6698013::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6698013::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6698013::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6698013_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6698013",
	"javax.swing.JApplet",
	nullptr,
	_bug6698013_FieldInfo_,
	_bug6698013_MethodInfo_
};

$Object* allocate$bug6698013($Class* clazz) {
	return $of($alloc(bug6698013));
}

$VirtualFile* bug6698013::root = nullptr;
$VirtualFile* bug6698013::rootFile = nullptr;
$VirtualFile* bug6698013::subdir = nullptr;
$VirtualFile* bug6698013::subdirFile = nullptr;

void bug6698013::init$() {
	$JApplet::init$();
}

void bug6698013::main($StringArray* args) {
	$init(bug6698013);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6698013$$Lambda$lambda$main$0)));
}

void bug6698013::init() {
	$var($JFileChooser, chooser, $new($JFileChooser, static_cast<$FileSystemView*>($$new($VirtualFileSystemView))));
	chooser->setCurrentDirectory(bug6698013::root);
	chooser->showOpenDialog(nullptr);
}

void bug6698013::lambda$main$0() {
	$init(bug6698013);
	$$new(bug6698013)->init();
}

void clinit$bug6698013($Class* class$) {
	$assignStatic(bug6698013::root, $new($VirtualFile, "testdir"_s, true));
	$assignStatic(bug6698013::rootFile, $new($VirtualFile, "testdir/test.txt"_s, false));
	$assignStatic(bug6698013::subdir, $new($VirtualFile, "testdir/subdir"_s, true));
	$assignStatic(bug6698013::subdirFile, $new($VirtualFile, "testdir/subdir/subtest.txt"_s, false));
}

bug6698013::bug6698013() {
}

$Class* bug6698013::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6698013$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6698013$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6698013, name, initialize, &_bug6698013_ClassInfo_, clinit$bug6698013, allocate$bug6698013);
	return class$;
}

$Class* bug6698013::class$ = nullptr;