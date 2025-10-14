#include <sun/swing/FilePane$DetailsTableRowSorter$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableRowSorter$2_FieldInfo_[] = {
	{"this$1", "Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$2, this$1)},
	{}
};

$MethodInfo _FilePane$DetailsTableRowSorter$2_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane$DetailsTableRowSorter;)V", nullptr, 0, $method(static_cast<void(FilePane$DetailsTableRowSorter$2::*)($FilePane$DetailsTableRowSorter*)>(&FilePane$DetailsTableRowSorter$2::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$DetailsTableRowSorter$2_EnclosingMethodInfo_ = {
	"sun.swing.FilePane$DetailsTableRowSorter",
	"sort",
	"()V"
};

$InnerClassInfo _FilePane$DetailsTableRowSorter$2_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableRowSorter$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$DetailsTableRowSorter$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableRowSorter$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_FilePane$DetailsTableRowSorter$2_FieldInfo_,
	_FilePane$DetailsTableRowSorter$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_FilePane$DetailsTableRowSorter$2_EnclosingMethodInfo_,
	_FilePane$DetailsTableRowSorter$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableRowSorter$2($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableRowSorter$2));
}

void FilePane$DetailsTableRowSorter$2::init$($FilePane$DetailsTableRowSorter* this$1) {
	$set(this, this$1, this$1);
}

$Object* FilePane$DetailsTableRowSorter$2::call() {
	$FilePane$DetailsTableRowSorter::access$001(this->this$1);
	return $of(nullptr);
}

FilePane$DetailsTableRowSorter$2::FilePane$DetailsTableRowSorter$2() {
}

$Class* FilePane$DetailsTableRowSorter$2::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableRowSorter$2, name, initialize, &_FilePane$DetailsTableRowSorter$2_ClassInfo_, allocate$FilePane$DetailsTableRowSorter$2);
	return class$;
}

$Class* FilePane$DetailsTableRowSorter$2::class$ = nullptr;

	} // swing
} // sun