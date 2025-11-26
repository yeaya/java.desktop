#include <com/sun/swing/internal/plaf/synth/resources/synth_ja.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace synth {
						namespace resources {

$MethodInfo _synth_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(synth_ja::*)()>(&synth_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _synth_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.swing.internal.plaf.synth.resources.synth_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_synth_ja_MethodInfo_
};

$Object* allocate$synth_ja($Class* clazz) {
	return $of($alloc(synth_ja));
}

void synth_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* synth_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewActionLabel.textAndMnemonic"_s),
			$of(u"\u8a73\u7d30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonAccessibleName"_s),
			$of(u"\u8a73\u7d30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.detailsViewButtonToolTip.textAndMnemonic"_s),
			$of(u"\u8a73\u7d30"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileAttrHeader.textAndMnemonic"_s),
			$of(u"\u5c5e\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDateHeader.textAndMnemonic"_s),
			$of(u"\u4fee\u6b63\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameHeader.textAndMnemonic"_s),
			$of(u"\u540d\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u540d(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeHeader.textAndMnemonic"_s),
			$of(u"\u30b5\u30a4\u30ba"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileTypeHeader.textAndMnemonic"_s),
			$of(u"\u30bf\u30a4\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesOfTypeLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306e\u30bf\u30a4\u30d7(&T):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.folderNameLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a9\u30eb\u30c0\u540d(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderAccessibleName"_s),
			$of(u"\u30db\u30fc\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.homeFolderToolTip.textAndMnemonic"_s),
			$of(u"\u30db\u30fc\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewActionLabel.textAndMnemonic"_s),
			$of(u"\u30ea\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonAccessibleName"_s),
			$of(u"\u30ea\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.listViewButtonToolTip.textAndMnemonic"_s),
			$of(u"\u30ea\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.lookInLabel.textAndMnemonic"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306e\u5834\u6240(&I):"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderActionLabel.textAndMnemonic"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderToolTip.textAndMnemonic"_s),
			$of(u"\u65b0\u898f\u30d5\u30a9\u30eb\u30c0\u306e\u4f5c\u6210"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.refreshActionLabel.textAndMnemonic"_s),
			$of(u"\u30ea\u30d5\u30ec\u30c3\u30b7\u30e5"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveInLabel.textAndMnemonic"_s),
			$of(u"\u4fdd\u5b58:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderAccessibleName"_s),
			$of(u"\u4e0a\u3078"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.upFolderToolTip.textAndMnemonic"_s),
			$of(u"1\u30ec\u30d9\u30eb\u4e0a\u3078"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.viewMenuLabel.textAndMnemonic"_s),
			$of(u"\u8868\u793a"_s)
		})
	});
}

synth_ja::synth_ja() {
}

$Class* synth_ja::load$($String* name, bool initialize) {
	$loadClass(synth_ja, name, initialize, &_synth_ja_ClassInfo_, allocate$synth_ja);
	return class$;
}

$Class* synth_ja::class$ = nullptr;

						} // resources
					} // synth
				} // plaf
			} // internal
		} // swing
	} // sun
} // com