#ifndef __GYDL_DIALOG_H__
#define __GYDL_DIALOG_H__

#include "gydl-window.h"

#include <gtk/gtk.h>

typedef struct _GydlDialog GydlDialog;

typedef enum {
        GYDL_DIALOG_TYPE_NET_ERR,
        GYDL_DIALOG_TYPE_DL_FAIL,
        GYDL_DIALOG_TYPE_DL_SUCCESS,
} GydlDialogType;

GtkWidget       *gydl_dialog_get_window                 (GydlDialog *dialog);

void             gydl_dialog_set_window                 (GydlDialog *dialog,
                                                         GydlWindow *window);

GydlDialog      *gydl_dialog_new                        (GydlDialogType);

#endif /* __GYDL_DIALOG_H__ */

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 8
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=8 tabstop=8 expandtab:
 * :indentSize=8:tabSize=8:noTabs=true:
 */
