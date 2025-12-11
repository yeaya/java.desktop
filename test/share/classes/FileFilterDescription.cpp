#include <FileFilterDescription.h>

#include <FileFilterDescription$CustomFileFilter.h>
#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $FileFilterDescription$CustomFileFilter = ::FileFilterDescription$CustomFileFilter;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

class FileFilterDescription$$Lambda$lambda$test$0 : public $Runnable {
	$class(FileFilterDescription$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* info) {
		$set(this, info, info);
	}
	virtual void run() override {
		FileFilterDescription::lambda$test$0(info);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileFilterDescription$$Lambda$lambda$test$0>());
	}
	$UIManager$LookAndFeelInfo* info = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FileFilterDescription$$Lambda$lambda$test$0::fieldInfos[2] = {
	{"info", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FileFilterDescription$$Lambda$lambda$test$0, info)},
	{}
};
$MethodInfo FileFilterDescription$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(FileFilterDescription$$Lambda$lambda$test$0::*)($UIManager$LookAndFeelInfo*)>(&FileFilterDescription$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileFilterDescription$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FileFilterDescription$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FileFilterDescription$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(FileFilterDescription$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileFilterDescription$$Lambda$lambda$test$0::class$ = nullptr;

$MethodInfo _FileFilterDescription_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileFilterDescription::*)()>(&FileFilterDescription::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$test$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FileFilterDescription::lambda$test$0))},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FileFilterDescription::setLookAndFeel))},
	{"start", "()V", nullptr, $PUBLIC},
	{"test", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&FileFilterDescription::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _FileFilterDescription_InnerClassesInfo_[] = {
	{"FileFilterDescription$CustomFileFilter", "FileFilterDescription", "CustomFileFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FileFilterDescription_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"FileFilterDescription",
	"java.applet.Applet",
	nullptr,
	nullptr,
	_FileFilterDescription_MethodInfo_,
	nullptr,
	nullptr,
	_FileFilterDescription_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FileFilterDescription$CustomFileFilter"
};

$Object* allocate$FileFilterDescription($Class* clazz) {
	return $of($alloc(FileFilterDescription));
}

void FileFilterDescription::init$() {
	$Applet::init$();
}

void FileFilterDescription::init() {
}

void FileFilterDescription::start() {
	try {
		test();
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void FileFilterDescription::test() {
	$init(FileFilterDescription);
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, infos, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, infos);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FileFilterDescription$$Lambda$lambda$test$0, info)));
			}
		}
	}
}

void FileFilterDescription::setLookAndFeel($UIManager$LookAndFeelInfo* info) {
	$init(FileFilterDescription);
	try {
		$UIManager::setLookAndFeel($($nc(info)->getClassName()));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void FileFilterDescription::lambda$test$0($UIManager$LookAndFeelInfo* info) {
	$init(FileFilterDescription);
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, chooser, $new($JFileChooser));
	setLookAndFeel(info);
	chooser->setAcceptAllFileFilterUsed(false);
	chooser->setFileFilter($$new($FileFilterDescription$CustomFileFilter));
	$SwingUtilities::updateComponentTreeUI(chooser);
	chooser->showDialog(nullptr, "Open"_s);
}

FileFilterDescription::FileFilterDescription() {
}

$Class* FileFilterDescription::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FileFilterDescription$$Lambda$lambda$test$0::classInfo$.name)) {
			return FileFilterDescription$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$loadClass(FileFilterDescription, name, initialize, &_FileFilterDescription_ClassInfo_, allocate$FileFilterDescription);
	return class$;
}

$Class* FileFilterDescription::class$ = nullptr;