use proconio::input;

fn main() {
    input! {
        n: usize,
        cq: [(usize,usize); n],
        q: usize,
        lr: [(usize,usize); q],
    };

    let mut memo1 = vec![0; n + 1];
    let mut memo2 = vec![0; n + 1];

    for i in 1..=n {
        if cq[i - 1].0 == 1 {
            memo1[i] = memo1[i - 1] + cq[i - 1].1 as u64;
            memo2[i] = memo2[i - 1];
        } else {
            memo1[i] = memo1[i - 1];
            memo2[i] = memo2[i - 1] + cq[i - 1].1 as u64;
        }
    }

    for i in 0..q {
        let ans1 = memo1[lr[i].1] - memo1[lr[i].0 - 1];
        let ans2 = memo2[lr[i].1] - memo2[lr[i].0 - 1];
        println!("{} {}", ans1, ans2);
    }
}
