#include <sun/swing/FilePane$4.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/text/Position$Bias.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$4_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$4, this$0)},
	{"val$fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$4, val$fileChooser)},
	{}
};

$MethodInfo _FilePane$4_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(static_cast<void(FilePane$4::*)($FilePane*,$JFileChooser*)>(&FilePane$4::init$))},
	{"getNextMatch", "(Ljava/lang/String;ILjavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$4_EnclosingMethodInfo_ = {
	"sun.swing.FilePane",
	"createList",
	"()Ljavax/swing/JPanel;"
};

$InnerClassInfo _FilePane$4_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$4",
	"javax.swing.JList",
	nullptr,
	_FilePane$4_FieldInfo_,
	_FilePane$4_MethodInfo_,
	"Ljavax/swing/JList<Ljava/lang/Object;>;",
	&_FilePane$4_EnclosingMethodInfo_,
	_FilePane$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$4($Class* clazz) {
	return $of($alloc(FilePane$4));
}

void FilePane$4::init$($FilePane* this$0, $JFileChooser* val$fileChooser) {
	$set(this, this$0, this$0);
	$set(this, val$fileChooser, val$fileChooser);
	$JList::init$();
}

int32_t FilePane$4::getNextMatch($String* prefix, int32_t startIndex, $Position$Bias* bias) {
	$var($ListModel, model, getModel());
	int32_t max = $nc(model)->getSize();
	if (prefix == nullptr || startIndex < 0 || startIndex >= max) {
		$throwNew($IllegalArgumentException);
	}
	$init($Position$Bias);
	bool backwards = (bias == $Position$Bias::Backward);
	for (int32_t i = startIndex; backwards ? i >= 0 : i < max; i += (backwards ? -1 : 1)) {
		$var($String, filename, $nc(this->val$fileChooser)->getName($cast($File, $(model->getElementAt(i)))));
		if ($nc(filename)->regionMatches(true, 0, prefix, 0, $nc(prefix)->length())) {
			return i;
		}
	}
	return -1;
}

FilePane$4::FilePane$4() {
}

$Class* FilePane$4::load$($String* name, bool initialize) {
	$loadClass(FilePane$4, name, initialize, &_FilePane$4_ClassInfo_, allocate$FilePane$4);
	return class$;
}

$Class* FilePane$4::class$ = nullptr;

	} // swing
} // sun