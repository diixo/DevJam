// Copyright (C) 2007  Davis E. King (davis@dlib.net)
// License: Boost Software License   See LICENSE.txt for the full license.
#ifndef DLIB_SVm_HEADER
#define DLIB_SVm_HEADER

#include "lib/dlib/src/svm/svm_rank_trainer.h"
#include "lib/dlib/src/svm/svm.h"
#include "lib/dlib/src/svm/krls.h"
#include "lib/dlib/src/svm/rls.h"
#include "lib/dlib/src/svm/kcentroid.h"
#include "lib/dlib/src/svm/kcentroid_overloads.h"
#include "lib/dlib/src/svm/kkmeans.h"
#include "lib/dlib/src/svm/feature_ranking.h"
#include "lib/dlib/src/svm/rbf_network.h"
#include "lib/dlib/src/svm/linearly_independent_subset_finder.h"
#include "lib/dlib/src/svm/reduced.h"
#include "lib/dlib/src/svm/rvm.h"
#include "lib/dlib/src/svm/pegasos.h"
#include "lib/dlib/src/svm/sparse_kernel.h"
#include "lib/dlib/src/svm/null_trainer.h"
#include "lib/dlib/src/svm/roc_trainer.h"
#include "lib/dlib/src/svm/kernel_matrix.h"
#include "lib/dlib/src/svm/empirical_kernel_map.h"
#include "lib/dlib/src/svm/svm_c_linear_trainer.h"
#include "lib/dlib/src/svm/svm_c_linear_dcd_trainer.h"
#include "lib/dlib/src/svm/svm_c_ekm_trainer.h"
#include "lib/dlib/src/svm/simplify_linear_decision_function.h"
#include "lib/dlib/src/svm/krr_trainer.h"
#include "lib/dlib/src/svm/sort_basis_vectors.h"
#include "lib/dlib/src/svm/svm_c_trainer.h"
#include "lib/dlib/src/svm/svm_one_class_trainer.h"
#include "lib/dlib/src/svm/svr_trainer.h"

#include "lib/dlib/src/svm/one_vs_one_decision_function.h"
#include "lib/dlib/src/svm/multiclass_tools.h"
#include "lib/dlib/src/svm/cross_validate_multiclass_trainer.h"
#include "lib/dlib/src/svm/cross_validate_regression_trainer.h"
#include "lib/dlib/src/svm/cross_validate_object_detection_trainer.h"
#include "lib/dlib/src/svm/cross_validate_sequence_labeler.h"
#include "lib/dlib/src/svm/cross_validate_sequence_segmenter.h"
#include "lib/dlib/src/svm/cross_validate_assignment_trainer.h"

#include "lib/dlib/src/svm/one_vs_all_decision_function.h"

#include "lib/dlib/src/svm/structural_svm_problem.h"
#include "lib/dlib/src/svm/sequence_labeler.h"
#include "lib/dlib/src/svm/assignment_function.h"
#include "lib/dlib/src/svm/track_association_function.h"
#include "lib/dlib/src/svm/active_learning.h"
#include "lib/dlib/src/svm/svr_linear_trainer.h"
#include "lib/dlib/src/svm/sequence_segmenter.h"

#endif // DLIB_SVm_HEADER


