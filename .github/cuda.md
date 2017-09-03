## CUDA
- Existing university courses [teaching CUDA](https://developer.nvidia.com/educators/existing-courses)
- 不是NVIDIA制造的显卡最好不要跑CUDA程序，因为本来就不兼容，否则显示器会直接崩掉，e.g. PHILIPS旗下的277E7E大屏显示器直接就gg了
- follow this [guide](http://justanoobpassingby.blogspot.com/2017/01/install-cuda-toolkit-on-ubuntu.html) to fix the black screen problem: `nvidia-settings`-> PRIME PROFILES -> select NVIDIA or Intel
- Verify You Have a CUDA-Capable GPU: `$ lspci | grep -i nvidia`
- For a per thread code of matrix multiply, for `Tesla K40m, max threads per block is 1024`, if the threads per block > 1024 , the result matrix will be zero.
- [cuPrintf](https://github.com/lijiansong/cuprintf_test) for log print on the device

### Stanford CME342
- [CME342 - Parallel Methods in Numerical Analysis](http://adl.stanford.edu/cme342/Home.html)

### OpenCL
- heterogeneous computing with opencl [slides](http://www.heterogeneouscompute.org/?page_id=7)
