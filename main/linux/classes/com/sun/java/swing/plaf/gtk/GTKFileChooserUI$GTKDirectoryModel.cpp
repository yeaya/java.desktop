#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryModel.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Comparator.h>
#include <java/util/Vector.h>
#include <java/util/function/Function.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Comparator = ::java::util::Comparator;
using $Vector = ::java::util::Vector;
using $Function = ::java::util::function::Function;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName : public $Function {
	$class(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, $NO_CLASS_INIT, $Function)
public:
	void init$($FileSystemView* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* f) override {
		 return $of($nc(inst$)->getSystemDisplayName($cast($File, f)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName>());
	}
	$FileSystemView* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, inst$)},
	{}
};
$MethodInfo GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::*)($FileSystemView*)>(&GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::class$ = nullptr;

$FieldInfo _GTKFileChooserUI$GTKDirectoryModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKDirectoryModel, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$GTKDirectoryModel_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKFileChooserUI$GTKDirectoryModel::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$GTKDirectoryModel::init$))},
	{"sort", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<+Ljava/io/File;>;)V", $PROTECTED},
	{}
};

$InnerClassInfo _GTKFileChooserUI$GTKDirectoryModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKDirectoryModel", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _GTKFileChooserUI$GTKDirectoryModel_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel",
	"javax.swing.plaf.basic.BasicDirectoryModel",
	nullptr,
	_GTKFileChooserUI$GTKDirectoryModel_FieldInfo_,
	_GTKFileChooserUI$GTKDirectoryModel_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$GTKDirectoryModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$GTKDirectoryModel($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$GTKDirectoryModel));
}

void GTKFileChooserUI$GTKDirectoryModel::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$BasicDirectoryModel::init$($(this$0->getFileChooser()));
}

void GTKFileChooserUI$GTKDirectoryModel::sort($Vector* v) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystemView, fsv, $nc($(this->this$0->getFileChooser()))->getFileSystemView());
	if (fsv == nullptr) {
		$BasicDirectoryModel::sort(v);
	} else {
		$nc(v)->sort($($Comparator::comparing(static_cast<$Function*>($$new(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName, static_cast<$FileSystemView*>($nc(fsv)))))));
	}
}

GTKFileChooserUI$GTKDirectoryModel::GTKFileChooserUI$GTKDirectoryModel() {
}

$Class* GTKFileChooserUI$GTKDirectoryModel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::classInfo$.name)) {
			return GTKFileChooserUI$GTKDirectoryModel$$Lambda$getSystemDisplayName::load$(name, initialize);
		}
	}
	$loadClass(GTKFileChooserUI$GTKDirectoryModel, name, initialize, &_GTKFileChooserUI$GTKDirectoryModel_ClassInfo_, allocate$GTKFileChooserUI$GTKDirectoryModel);
	return class$;
}

$Class* GTKFileChooserUI$GTKDirectoryModel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com