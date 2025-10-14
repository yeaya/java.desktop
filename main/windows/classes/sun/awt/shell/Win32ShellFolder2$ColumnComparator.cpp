#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator$1.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$ColumnComparator$1 = ::sun::awt::shell::Win32ShellFolder2$ColumnComparator$1;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$ColumnComparator_FieldInfo_[] = {
	{"shellFolder", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $PRIVATE | $FINAL, $field(Win32ShellFolder2$ColumnComparator, shellFolder)},
	{"columnIdx", "I", nullptr, $PRIVATE | $FINAL, $field(Win32ShellFolder2$ColumnComparator, columnIdx)},
	{}
};

$MethodInfo _Win32ShellFolder2$ColumnComparator_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;I)V", nullptr, $PUBLIC, $method(static_cast<void(Win32ShellFolder2$ColumnComparator::*)($Win32ShellFolder2*,int32_t)>(&Win32ShellFolder2$ColumnComparator::init$))},
	{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _Win32ShellFolder2$ColumnComparator_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$ColumnComparator", "sun.awt.shell.Win32ShellFolder2", "ColumnComparator", $PRIVATE | $STATIC},
	{"sun.awt.shell.Win32ShellFolder2$ColumnComparator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$ColumnComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$ColumnComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_Win32ShellFolder2$ColumnComparator_FieldInfo_,
	_Win32ShellFolder2$ColumnComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/File;>;",
	nullptr,
	_Win32ShellFolder2$ColumnComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$ColumnComparator($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$ColumnComparator));
}

void Win32ShellFolder2$ColumnComparator::init$($Win32ShellFolder2* shellFolder, int32_t columnIdx) {
	$set(this, shellFolder, shellFolder);
	this->columnIdx = columnIdx;
}

int32_t Win32ShellFolder2$ColumnComparator::compare($File* o, $File* o1) {
	$var($Integer, result, $cast($Integer, $ShellFolder::invoke($$new($Win32ShellFolder2$ColumnComparator$1, this, o, o1))));
	return result == nullptr ? 0 : $nc(result)->intValue();
}

int32_t Win32ShellFolder2$ColumnComparator::compare(Object$* o, Object$* o1) {
	return this->compare($cast($File, o), $cast($File, o1));
}

Win32ShellFolder2$ColumnComparator::Win32ShellFolder2$ColumnComparator() {
}

$Class* Win32ShellFolder2$ColumnComparator::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$ColumnComparator, name, initialize, &_Win32ShellFolder2$ColumnComparator_ClassInfo_, allocate$Win32ShellFolder2$ColumnComparator);
	return class$;
}

$Class* Win32ShellFolder2$ColumnComparator::class$ = nullptr;

		} // shell
	} // awt
} // sun