#include <sun/awt/shell/Win32ShellFolder2$16.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <javax/swing/SwingConstants.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/awt/shell/Win32ShellFolder2$ColumnComparator.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING
#undef RIGHT

using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $Win32ShellFolder2 = ::sun::awt::shell::Win32ShellFolder2;
using $Win32ShellFolder2$ColumnComparator = ::sun::awt::shell::Win32ShellFolder2$ColumnComparator;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$16_FieldInfo_[] = {
	{"this$0", "Lsun/awt/shell/Win32ShellFolder2;", nullptr, $FINAL | $SYNTHETIC, $field(Win32ShellFolder2$16, this$0)},
	{}
};

$MethodInfo _Win32ShellFolder2$16_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/shell/Win32ShellFolder2;)V", nullptr, 0, $method(static_cast<void(Win32ShellFolder2$16::*)($Win32ShellFolder2*)>(&Win32ShellFolder2$16::init$))},
	{"call", "()[Lsun/awt/shell/ShellFolderColumnInfo;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Win32ShellFolder2$16_EnclosingMethodInfo_ = {
	"sun.awt.shell.Win32ShellFolder2",
	"getFolderColumns",
	"()[Lsun/awt/shell/ShellFolderColumnInfo;"
};

$InnerClassInfo _Win32ShellFolder2$16_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$16", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32ShellFolder2$16_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.Win32ShellFolder2$16",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_Win32ShellFolder2$16_FieldInfo_,
	_Win32ShellFolder2$16_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[Lsun/awt/shell/ShellFolderColumnInfo;>;",
	&_Win32ShellFolder2$16_EnclosingMethodInfo_,
	_Win32ShellFolder2$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$16($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$16));
}

void Win32ShellFolder2$16::init$($Win32ShellFolder2* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32ShellFolder2$16::call() {
	$useLocalCurrentObjectStackCache();
	$var($ShellFolderColumnInfoArray, columns, this->this$0->doGetColumnInfo(this->this$0->getIShellFolder()));
	if (columns != nullptr) {
		$var($List, notNullColumns, $new($ArrayList));
		for (int32_t i = 0; i < columns->length; ++i) {
			$var($ShellFolderColumnInfo, column, columns->get(i));
			if (column != nullptr) {
				column->setAlignment($($Integer::valueOf($nc($(column->getAlignment()))->intValue() == 1 ? $SwingConstants::RIGHT : $nc($(column->getAlignment()))->intValue() == 2 ? $SwingConstants::CENTER : $SwingConstants::LEADING)));
				column->setComparator($$new($Win32ShellFolder2$ColumnComparator, this->this$0, i));
				notNullColumns->add(column);
			}
		}
		$assign(columns, $new($ShellFolderColumnInfoArray, notNullColumns->size()));
		notNullColumns->toArray(columns);
	}
	return $of(columns);
}

Win32ShellFolder2$16::Win32ShellFolder2$16() {
}

$Class* Win32ShellFolder2$16::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$16, name, initialize, &_Win32ShellFolder2$16_ClassInfo_, allocate$Win32ShellFolder2$16);
	return class$;
}

$Class* Win32ShellFolder2$16::class$ = nullptr;

		} // shell
	} // awt
} // sun