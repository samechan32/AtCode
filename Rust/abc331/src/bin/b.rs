use proconio::input;
use std::cmp::min;
fn main() {
    input! {
        n: usize,
        s: usize,
        m: usize,
        l: usize,
    }

    let mut ans = 999999999999999;
    for s_i in 0..101 {
        for m_i in 0..101 {
            for l_i in 0..101 {
                if 6 * s_i + 8 * m_i + 12 * l_i >= n {
                    ans = min(ans, s * s_i + m * m_i + l * l_i);
                }
            }
        }
    }
    println!("{}", ans);
}
