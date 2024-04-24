#pragma once 
#define K2C_MAX_NDIM 5
struct k2c_tensor
{
    /** Pointer to array of tensor values flattened in row major order. */
    float array[26000];

    /** Rank of the tensor (number of dimensions). */
    size_t ndim;

    /** Number of elements in the tensor. */
    size_t numel;

    /** Array, size of the tensor in each dimension. */
    size_t shape[K2C_MAX_NDIM];
};
typedef struct k2c_tensor k2c_tensor;


void WebModel(k2c_tensor* dense_69_input_input, k2c_tensor* dense_71_output);
void k2c_relu_func(float *x, const size_t size);
void k2c_sigmoid_func(float *x, const size_t size);
void k2c_idx2sub(const size_t idx, size_t *sub, const size_t *shape, const size_t ndim);
size_t k2c_sub2idx(const size_t *sub, const size_t *shape, const size_t ndim);
void k2c_matmul(float *C, const float *A, const float *B, const size_t outrows, const size_t outcols, const size_t innerdim);
void k2c_dense(k2c_tensor *output, const k2c_tensor *input, const k2c_tensor *kernel, const k2c_tensor *bias, int activation, float *fwork);
void k2c_affine_matmul(float *C, const float *A, const float *B, const float *d, const size_t outrows, const size_t outcols, const size_t innerdim);
void k2c_dot(k2c_tensor *C, const k2c_tensor *A, const k2c_tensor *B, const size_t *axesA, const size_t *axesB, const size_t naxes, const int normalize, float *fwork);
void k2c_bias_add(k2c_tensor *A, const k2c_tensor *b);