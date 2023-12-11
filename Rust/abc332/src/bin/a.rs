use proconio::input;

fn main() {
    input! {
        n: usize,
        s: usize,
        k: usize,
        pq: [(usize,usize); n],
    };

    let mut ans = 0;
    for i in 0..n {
        ans += pq[i].0 * pq[i].1;
    }

    if ans < s {
        ans += k;
    }

    println!("{}", ans);
}
